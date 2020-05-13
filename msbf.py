import glob
import pprint
import struct
import collections
import os
import re
from util import *
from storyflag import idx_to_story_flag

cumulative_flags_set = [b'\x00'*0x10]*len(flagindex_names)

def parseMSB(fname):
    print(fname)
    f = open(fname,'rb')
    f.seek(0x20)

    parsed = collections.OrderedDict()

    while True:
        seg_header = f.read(0x10)
        if len(seg_header) <= 0:
            break
        seg_id, seg_len = struct.unpack('>4si8x',seg_header)
        seg_id = seg_id.decode('ascii')
        seg_data = f.read(seg_len)
        f.read(-seg_len%0x10) # pad to next multiple of 0x10

        if seg_id == 'FLW3':
            parsed['FLW3'] = collections.OrderedDict()
            parsed['FLW3']['flow'] = collections.OrderedDict()
            parsed['FLW3']['branch_points'] = []
            count1, count2 = struct.unpack('>hh12x',seg_data[:0x10])
            for i in range(count1): # for every node in FLW3
                item = unpack('type subType param1 param2 next param3 param4 param5','>bb2xhhhhhh',seg_data[0x10+0x10*i:0x20+0x10*i])
                item_id = i
                assert item['type'] in (1,2,3,4)
                item['type'] = ['type1','switch','type3','start'][item['type']-1]
                #unk1: -1 to 13311
                #flagId: -256 to 20480
                #next: -1 to 1016
                #unk4: 0 to 201
                #nextTrue: 0 to 262
                #nextFalse: 0 to 512
                if item['type'] == 'type1': # text
                    assert item.pop('subType') == -1
                    assert item.pop('param1') == 0
                    assert item.pop('param2') == 0
                    # param3 : file index
                    # param4 : line index
                    assert item.pop('param5') == 0
                elif item['type'] == 'switch':
                    assert item['subType'] in (0,6)
                    assert item.pop('param1') == 0
                    assert item['param2'] >= 0
                    assert item.pop('next') == -1
                    assert item['param3'] >= 0
                    assert item['param4'] in (2,3,4)
                    assert item['param5'] >= 0
                elif item['type'] == 'type3':
                    assert item['subType'] in (0,1,2,4,6)
                    assert item.pop('param4') == 0
                    assert item.pop('param5') == 0
                elif item['type'] == 'start':
                    assert item.pop('subType') == -1
                    assert item.pop('param1') == 0
                    assert item.pop('param2') == 0
                    assert item.pop('param3') == 0
                    assert item.pop('param4') == 0
                    assert item.pop('param5') == 0
                else:
                    raise Exception('wat')

                parsed['FLW3']['flow'][item_id] = item
            for i in range(count2): # for every branch point
                item = struct.unpack('>h',seg_data[0x10+0x10*count1+2*i:0x12+0x10*count1+2*i])[0]
                parsed['FLW3']['branch_points'].append(item)
        elif seg_id == 'FEN1' or seg_id == 'LBL1':
            parsed[seg_id] = []
            count = struct.unpack('>i',seg_data[:4])[0]
            for i in range(count):
                count, ptr = struct.unpack('>ii',seg_data[4+8*i:0xC+8*i])
                entrypoint_group = []
                for _ in range(count):
                    strlen = seg_data[ptr]
                    string = seg_data[1+ptr:1+ptr+strlen].decode('ascii')
                    value = struct.unpack('>i',seg_data[1+ptr+strlen:5+ptr+strlen])[0]
                    entrypoint = collections.OrderedDict()
                    entrypoint['name']=string
                    entrypoint['value']=value
                    entrypoint_group.append(entrypoint)
                    ptr += 5+strlen
                parsed[seg_id].append(entrypoint_group)
        elif seg_id == 'ATR1':
            parsed['ATR1'] = 'todo'
        elif seg_id == 'TXT2':
            parsed['TXT2'] = []
            count = struct.unpack('>i',seg_data[:4])[0]
            indices = [struct.unpack('>i',seg_data[4+4*i : 8+4*i])[0] for i in range(count)]
            for i in range(count): # for every item of text
                bytestring = seg_data[indices[i] : (indices[i+1] if i + 1 < count else seg_len) - 2]
                # decoding special characters:
                bytestring = bytestring.replace(b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x00', '<r<'.encode('utf-16be'))  # red
                bytestring = bytestring.replace(b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x02', '<y+<'.encode('utf-16be')) # yellow-white
                bytestring = bytestring.replace(b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x03', '<b<'.encode('utf-16be'))  # blue
                bytestring = bytestring.replace(b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x04', '<g<'.encode('utf-16be'))  # green
                bytestring = bytestring.replace(b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x05', '<y<'.encode('utf-16be'))  # yellow
                bytestring = bytestring.replace(b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x09', '<r+<'.encode('utf-16be')) # red-white
                bytestring = bytestring.replace(b'\x00\x0E\x00\x00\x00\x03\x00\x02\xFF\xFF', '>>'.encode('utf-16be'))   # end formatting
                
                bytestring = bytestring.replace(b'\x00\x0E\x00\x01\x00\x00\x00\x02\xFF\xFF', '[1]'.encode('utf-16be'))  # 1st answer
                bytestring = bytestring.replace(b'\x00\x0E\x00\x01\x00\x01\x00\x02\x00\x00', '[2-]'.encode('utf-16be')) # 2nd answer (cancel)
                bytestring = bytestring.replace(b'\x00\x0E\x00\x01\x00\x01\x00\x02\xFF\xFF', '[2]'.encode('utf-16be'))  # 2nd answer
                bytestring = bytestring.replace(b'\x00\x0E\x00\x01\x00\x02\x00\x02\x00\x00', '[3-]'.encode('utf-16be')) # 3rd answer (cancel)
                bytestring = bytestring.replace(b'\x00\x0E\x00\x01\x00\x02\x00\x02\xFF\xFF', '[3]'.encode('utf-16be'))  # 3rd answer
                bytestring = bytestring.replace(b'\x00\x0E\x00\x01\x00\x03\x00\x02\x00\x00', '[4-]'.encode('utf-16be')) # 3rd answer (cancel)
                bytestring = bytestring.replace(b'\x00\x0E\x00\x01\x00\x03\x00\x02\xFF\xFF', '[4]'.encode('utf-16be'))  # 4th answer
                bytestring = bytestring.replace(b'\x00\x0E\x00\x01\x00\x04\x00\x02\x00\x01', '~'.encode('utf-16be'))    # micro pause
                bytestring = bytestring.replace(b'\x00\x0E\x00\x01\x00\x04\x00\x02\x00\x05', '~~'.encode('utf-16be'))   # short pause
                bytestring = bytestring.replace(b'\x00\x0E\x00\x01\x00\x04\x00\x02\x00\x0F', '~~~'.encode('utf-16be'))  # long pause
                
                bytestring = bytestring.replace(b'\x00\x0E\x00\x02\x00\x00\x00\x00',         'Link'.encode('utf-16be')) # heroname
                bytestring = bytestring.replace(b'\x00\x0E\x00\x02\x00\x04\x00\x02\x00\xCD', '(A)'.encode('utf-16be'))  # A button
                bytestring = bytestring.replace(b'\x00\x0E\x00\x02\x00\x04\x00\x02\x01\xCD', '(B)'.encode('utf-16be'))  # B button
                bytestring = bytestring.replace(b'\x00\x0E\x00\x02\x00\x04\x00\x02\x06\xCD', '(C)'.encode('utf-16be'))  # C button
                bytestring = bytestring.replace(b'\x00\x0E\x00\x02\x00\x04\x00\x02\x07\xCD', '(Z)'.encode('utf-16be'))  # Z button
                bytestring = bytestring.replace(b'\x00\x0E\x00\x02\x00\x04\x00\x02\x11\xCD', '(v)'.encode('utf-16be'))  # down button
                # continue
                string = bytestring.decode('utf-16be').replace('\n','\\n').replace('"','\\"')
                string = re.sub(r'[^\x20-\x7e]','_', string)
                parsed['TXT2'].append(string)
        else:
            raise Exception('unimplemented '+seg_id)
    return parsed


if __name__ == "__main__":
    # global names
    world = parseMSB('en_US/0-Common/0-Common/007-MapText.msbt')
    itr = ((item['name'], world['TXT2'][item['value']]) for items in world['LBL1'] for item in items)
    world = sorted(itr, key=lambda a: a[0])
    with open('output/MapText.json','w') as f:
        f.write(objToJson(collections.OrderedDict(world)))
    world = parseMSB('en_US/0-Common/0-Common/word.msbt')
    itr = ((item['name'], world['TXT2'][item['value']]) for items in world['LBL1'] for item in items)
    world = sorted(itr, key=lambda a: a[0])
    with open('output/word.json','w') as f:
        f.write(objToJson(collections.OrderedDict(world)))

    # events

    for fname in glob.glob('en_US/**/*.msbf', recursive=True):
        parsed = parseMSB(fname)
        parsedMsbt = parseMSB(fname.replace('.msbf','.msbt'))
        
        def printItem(allItems,lines,itemId,indent,already_printed,needed_labels,strings):
            if itemId is -1:
                return
            if itemId in already_printed:
                needed_labels.add(itemId)
                lines.append((None,indent,'goto flw_'+str(itemId)))
                return
            already_printed.add(itemId)
            item = allItems['flow'][itemId]
            if item['type']=='start':
                lines.append((itemId,indent,'start()'))
            elif item['type']=='switch':
                # if item['subType']==0 and item['param3']==14:
                #     print(item['param2'])
                if item['subType']==6 and item['param2'] == 0 and (item['param3'] == 1 or item['param3']==0): #TODO is there a difference in those choices? 
                    lines.append((itemId,indent,'switch (choice(%d, %d)) {'%(item['param4'], item['param3'])))
                elif item['subType']==6 and item['param3'] == 3:
                    lines.append((itemId,indent,'switch (story_flags[%d /* %s */]) {'%(item['param2'],idx_to_story_flag(item['param2']))))
                elif item['subType']==6 and item['param3']==6:
                    assert item['param4']==2
                    lines.append((itemId,indent,'switch (scene_flags[%d /* %s */]) {'%(item['param2'],idx_to_scene_flag(item['param2']))))
                elif item['subType']==6 and item['param3']==5:
                    assert item['param4']==2
                    lines.append((itemId,indent,'switch (loadzone_temp_flags[%d /* %s */]) {'%(item['param2'],idx_to_scene_flag(64+item['param2']))))
                elif item['subType']==6 and item['param3']==9:
                    assert item['param4']==2
                    lines.append((itemId,indent,'switch (temp_flags[%d /* %s */]) {'%(item['param2'],idx_to_scene_flag(item['param2']))))
                elif item['subType']==6 and item['param3']==10:
                    assert item['param4']==2
                    lines.append((itemId,indent,'switch (has_rupees(%d)) {'%(item['param2'])))
                elif item['subType']==0 and item['param3']==16:
                    lines.append((itemId,indent,'switch (minigame_related[%d]) {'%(item['param2'])))
                elif item['subType']==6 and item['param3']==19:
                    assert item['param4']==2
                    lines.append((itemId,indent,'switch (adventure_pouch_has(%d 0x%04X)) {'%(item['param2'],item['param2'])))
                else:
                    lines.append((itemId,indent,'switch ('+str(item)+') {'))
                for i in range(item['param4']):
                    lines.append((None,indent,'  case %d:'%i))
                    printItem(allItems,lines,allItems['branch_points'][item['param5']+i],indent+1,already_printed,needed_labels,strings)
                lines.append((None,indent,'}'))
            elif item['type']=='type1':
                msbt_file, msbt_line = item['param3'],item['param4']
                lines.append((itemId,indent,'printf("%s")'%strings[msbt_line]))
            elif item['type']=='type3' and item['subType']==0 and item['param3']==8:
                lines.append((itemId,indent,"rupees += %d;"%(item['param2'])))
            elif item['type']=='type3' and item['subType']==0 and item['param1']==0 and item['param3']==0:
                lines.append((itemId,indent,"story_flags[%d /* %s */] = true;"%(item['param2'],idx_to_story_flag(item['param2']))))
            elif item['type']=='type3' and item['subType']==0 and item['param1']==0 and item['param3']==1:
                lines.append((itemId,indent,"story_flags[%d /* %s */] = false;"%(item['param2'],idx_to_story_flag(item['param2']))))
            elif item['type']=='type3' and item['subType']==0 and item['param1']==0 and item['param3']==9:
                lines.append((itemId,indent,"give_item(%d 0x%02X);"%(item['param2'],item['param2'])))
            elif item['type']=='type3' and item['subType']==1 and item['param3']==2:
                lines.append((itemId,indent,"scene_flags[%d '%s'][%d /* %s */] = true;"%(item['param2'],flagindex_names[item['param2']],item['param1'],idx_to_scene_flag(item['param1']))))
                cumulative_flags_set[item['param2']] = setBit(cumulative_flags_set[item['param2']],item['param1'])
            elif item['type']=='type3' and item['subType']==1 and item['param3']==3:
                lines.append((itemId,indent,"scene_flags[%d '%s'][%d /* %s */] = false;"%(item['param2'],flagindex_names[item['param2']],item['param1'],idx_to_scene_flag(item['param1']))))
            elif item['type']=='type3' and item['subType']==1 and item['param3']==4:
                lines.append((itemId,indent,"loadzone_temp_flags[%d /* %s */] = true;"%(item['param1'],idx_to_scene_flag(64+item['param1']))))
            elif item['type']=='type3' and item['subType']==1 and item['param3']==5:
                lines.append((itemId,indent,"loadzone_temp_flags[%d /* %s */] = false;"%(item['param1'],idx_to_scene_flag(64+item['param1']))))
            elif item['type']=='type3' and item['subType']==1 and item['param3']==10:
                scen = None
                if '460' in fname:
                    scen = [{"name": "F303","room": 0,"layer": 0,"entrance": 3,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F020","room": 0,"layer": 0,"entrance": 14,"byte4": 2,"byte5": 2,"flag6": 0,"zero": 0,"flag8": 0},{"name": "B200","room": 10,"layer": 3,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "S100","room": 0,"layer": 2,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "S200","room": 2,"layer": 2,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "S300","room": 0,"layer": 2,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "S000","room": 0,"layer": 2,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "B100","room": 0,"layer": 5,"entrance": 2,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "B300","room": 0,"layer": 2,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F401","room": 1,"layer": 0,"entrance": 7,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "B101","room": 0,"layer": 2,"entrance": 2,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "B301","room": 0,"layer": 2,"entrance": 3,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "B201","room": 0,"layer": 3,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F401","room": 1,"layer": 0,"entrance": 7,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F401","room": 1,"layer": 0,"entrance": 7,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F403","room": 1,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F403","room": 1,"layer": 4,"entrance": 7,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "B400","room": 0,"layer": 1,"entrance": 3,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F302","room": 0,"layer": 13,"entrance": 5,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F302","room": 0,"layer": 0,"entrance": 4,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F302","room": 0,"layer": 2,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0}]
                if '008' in fname:
                    scen = [{"name": "F007r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F004r","room": 0,"layer": 0,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F004r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F001r","room": 0,"layer": 0,"entrance": 2,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F001r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F008r","room": 0,"layer": 0,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "D000","room": 0,"layer": 0,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "D000","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F020","room": 0,"layer": 1,"entrance": 4,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 14,"entrance": 25,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F006r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 13,"entrance": 13,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 1,"entrance": 14,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F020","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F020","room": 0,"layer": 0,"entrance": 2,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F020","room": 0,"layer": 0,"entrance": 3,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F020","room": 0,"layer": 0,"entrance": 5,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 3,"entrance": 0,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 3,"entrance": 19,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F004r","room": 0,"layer": 0,"entrance": 2,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F009r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 10,"entrance": 22,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F020","room": 0,"layer": 3,"entrance": 6,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F001r","room": 0,"layer": 0,"entrance": 3,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F001r","room": 0,"layer": 0,"entrance": 4,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F021","room": 0,"layer": 13,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F002r","room": 0,"layer": 0,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F009r","room": 0,"layer": 0,"entrance": 2,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F020","room": 0,"layer": 0,"entrance": 19,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F020","room": 0,"layer": 0,"entrance": 20,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F012r","room": 0,"layer": 0,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F005r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F007r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F013r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F014r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F015r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F016r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F017r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F018r","room": 0,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F017r","room": 0,"layer": 0,"entrance": 2,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 15,"entrance": 40,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 10,"entrance": 41,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 16,"entrance": 42,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 3,"entrance": 43,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F008r","room": 0,"layer": 15,"entrance": 2,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "S000","room": 0,"layer": 2,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 18,"entrance": 51,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 0,"entrance": 52,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "D003_7","room": 0,"layer": 0,"entrance": 4,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F008r","room": 0,"layer": 0,"entrance": 2,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F401","room": 1,"layer": 15,"entrance": 6,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 28,"entrance": 48,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 21,"entrance": 58,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F001r","room": 1,"layer": 15,"entrance": 4,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 12,"entrance": 59,"byte4": 2,"byte5": 2,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 0,"entrance": 60,"byte4": 2,"byte5": 2,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F020","room": 0,"layer": 6,"entrance": 4,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F001r","room": 6,"layer": 0,"entrance": 1,"byte4": 2,"byte5": 2,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F013r","room": 0,"layer": 0,"entrance": 0,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F001r","room": 1,"layer": 13,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F407","room": 0,"layer": 14,"entrance": 1,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 28,"entrance": 48,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 22,"entrance": 96,"byte4": 2,"byte5": 0,"flag6": 0,"zero": 0,"flag8": 0},{"name": "F000","room": 0,"layer": 0,"entrance": 96,"byte4": 2,"byte5": 1,"flag6": 0,"zero": 0,"flag8": 0}]
                lines.append((itemId,indent,"changeScene(%d, %d) // %s"%(item['param1'],item['param2'],scen[item['param1']] if scen is not None else '')))
            elif item['type']=='type3' and item['param3']==28:
                lines.append((itemId,indent,"temp_flags[%d /* %s */] = true;"%(item['param1'],idx_to_scene_flag(item['param1']))))
            elif item['type']=='type3' and item['param3']==29:
                # this would make sense, but I actually didn't confirm this
                lines.append((itemId,indent,"temp_flags[%d /* %s */] = false;"%(item['param1'],idx_to_scene_flag(item['param1']))))
            else:
                lines.append((itemId,indent,str(item)))
            if 'next' in item:
                printItem(allItems,lines,item['next'],indent,already_printed,needed_labels,strings)
                
        def printEvflFile(file,parsed,parsedMsbt):
            lines = []
            already_printed = set()
            needed_labels = set()
            for entrypoint_group in parsed['FEN1']:
                for entrypoint in entrypoint_group:
                    lines.append((None,0,'void entrypoint_'+entrypoint['name']+'() {'))
                    printItem(parsed['FLW3'],lines,entrypoint['value'],1,already_printed,needed_labels,parsedMsbt['TXT2'])
                    lines.append((None,0,'}\n'))
            for lineId,indent,lineStr in lines:
                if lineId in needed_labels:
                    file.write(' '*10+'\t'*indent+'flw_'+str(lineId)+':\n')
                if lineStr is not None:
                    file.write(('/*<%3d>*/ '%(lineId) if lineId else ' '*10)+'\t'*indent+lineStr+'\n')
            assert len(already_printed) == len(parsed['FLW3']['flow'])
        
        f2=open('output/event/'+fname.split(os.sep)[-1].replace('.msbf','.json'),'w', encoding='utf-8')
        f2.write(objToJson(parsed))
        f2.close()
        f2=open('output/event2/'+fname.split(os.sep)[-1].replace('.msbf','.c'),'w', encoding='utf-8')
        printEvflFile(f2,parsed,parsedMsbt)
        f2.close()
        f2=open('output/text/'+fname.split(os.sep)[-1].replace('.msbf','.txt'),'w', encoding='utf-8')
        for line in parsedMsbt['TXT2']:
            f2.write(line + '\n')
        f2.close() 

# console output
#print('-----------------------------------------------')
#print('50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F')
#print('-----------------------------------------------')
#for i in range(len(flagindex_names)):
#    print(flagindex_names[i])
#    printHex(cumulative_flags_set[i])