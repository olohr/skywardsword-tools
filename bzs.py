import struct
import glob
import pprint
import json
import collections
import os

ROOMCOUNT = 16
LAYERCOUNT = 29

sizes = {'FILE':4,
         'SCEN':40,
         'CAM ':44,
         'PATH':12,
         'PNT ':16,
         'SPNT':16,
         'BPNT':40,
         'SPTH':12,
         'AREA':32,
         'EVNT':56,
         'PLY ':24,
         'OBJS':36,
         'OBJ ':36,
         'SOBS':48,
         'SOBJ':48,
         'STAS':48,
         'STAG':48,
         'SNDT':48,
         'DOOR':36,
         'LYSE':4,
         'STIF':20,
         'PCAM':36,
         'LYLT':4}

flagindex_names = ["Skyloft",
                   "Faron Woods",
                   "Lake Floria",
                   "Flooded Faron Woods",
                   "Eldin Volcano",
                   "Eldin Volcano Summit",
                   "-Unused-",
                   "Lanayru Desert",
                   "Lanayru Sand Sea",
                   "Lanayru Gorge",
                   "Sacred Grounds",
                   "Faron: Skyview Temple",
                   "Faron: Ancient Cistern",
                   "-Unused-",
                   "Eldin: Earth Temple",
                   "Eldin: Fire Sanctuary",
                   "-Unused-",
                   "Lanayru: Mining Facility",
                   "Lanayru: Sandship",
                   "-Unused-",
                   "Skyloft: Sky Keep",
                   "The Sky",
                   "Faron: Silent Realm",
                   "Eldin: Silent Realm",
                   "Lanayru: Silent Realm",
                   "Skyloft: Silent Realm",
                   'n/a',]

stagenames = {
    "F000": "Town Field",
    "F001r": "Dormitory",
    "F002r": "General Store (Beedle's Shop)",
    "F004r": "Shopping Mall",
    "F005r": "Orielle & Parrow's House",
    "F006r": "Repairman's House",
    "F007r": "Piper's House",
    "F008r": "Inside the Goddess Statue",
    "F009r": "Kendo Hall",
    "F010r": "Isle of Songs Interior",
    "F011r": "Pumpkin Bar",
    "F012r": "Demon Guy's House",
    "F013r": "Fortune Teller's House",
    "F014r": "Potion Merchant's House",
    "F015r": "Junk Merchant's House",
    "F016r": "Pipit's House",
    "F017r": "Item Merchant's House",
    "F018r": "Storage Merchant's House",
    "F019r": "Bamboo Cutting",
    "F020": "Sky Field",
    "F021": "Cutscene Sky",
    "F023": "Thunderhead",
    "D000": "Beginning Cave",
    "D003_0": "D3R00 (Enemy)",
    "D003_1": "D3R01 (Underground)",
    "D003_2": "D3R02 (Lava)",
    "D003_3": "D3R03 (Timeshift 2)",
    "D003_4": "D3R04 (Timeshift 1)",
    "D003_5": "D3R05 (ツタ系)",
    "D003_6": "D3R06 (Captain 2)",
    "D003_7": "D3R07 (Entrance)",
    "D003_8": "D3R08 Tri Get",
    "S000": "Town Silent Realm",
    "F100": "Forest F1",
    "F100_1": "Forest F1 (Tree Interior)",
    "F101": "Forest F1 North",
    "F102": "Forest F2 (Lake Hylia)",
    "F102_1": "Forest F2 (Before Dungeon)",
    "F102_2": "Forest F2 (Water Dragon Room)",
    "F103": "Forest F3",
    "F103_1": "Forest F3 (Tree Interior)",
    "D100": "Forest D1",
    "D101": "Forest D2",
    "B100": "Forest Boss (R00 Ghirahim)",
    "B100_1": "After Forest Boss (R00 Skyview Spring)",
    "B101": "Forest Boss (Asura)",
    "B101_1": "Farore's Candle Room",
    "S100": "Forest Silent Realm",
    "F200": "Volcano F1",
    "F201_1": "Volcano F2 (Crater)",
    "F201_2": "Volcano F3 (Crater)",
    "F201_3": "Volcano F2 (Before D2 Entrance)",
    "F201_4": "Volcano F2 (Rock Trickling Water)",
    "F202": "Volcano F3",
    "F202_1": "Volcano F3 (Fire Dragon Dummy 1)",
    "F202_2": "Volcano F3 (Fire Dragon Dummy 2)",
    "F202_3": "Volcano F3 Completed (Fire Dragon Dummy 1)",
    "F202_4": "Volcano F3 Completed (Fire Dragon Dummy 2)",
    "F210": "Volcano F1 (Underground)",
    "F211": "Volcano F1 (Rupee Digging Spot)",
    "F221": "Volcano F2 (Fire Dragon Room)",
    "D200": "Volcano D1",
    "D201": "Volcano D2 A",
    "D201_1": "Volcano D2 B",
    "B200": "Volcano D1 Boss",
    "B201": "Volcano D2 Boss (Ghirahim 2nd Fight)",
    "B201_1": "Volcano D2 Boss (Din's Fire)",
    "B210": "Volcano D1 Boss (Earth Spring)",
    "S200": "Mountain Silent Realm",
    "F300": "Desert Field F1",
    "F300_1": "Desert Field F1r00 (Excavation Area)",
    "F300_2": "Desert Field F1 (Container Room 1)",
    "F300_3": "Desert Field F1 (Container Room 2)",
    "F300_4": "Desert Field F1 (Temple of Time)",
    "F300_5": "Desert Field F1 (Underground Passage to Temple of Time)",
    "F301": "Desert F2 Harbour",
    "F301_1": "Desert F2 Sand Sea",
    "F301_2": "Timeshift Island",
    "F301_3": "Desert F2 Claw Island",
    "F301_4": "Desert F2 Rail Car Island",
    "F301_5": "Captain's House Interior",
    "F301_6": "Desert F2 Timeshift Island",
    "F301_7": "Shipyard Interior",
    "F302": "Desert F3 Start",
    "F303": "Lanayru Gorge",
    "D300": "Desert D1 A",
    "D300_1": "Desert D1 B",
    "D301": "Sand D2 A",
    "D301_1": "Sand D2 B",
    "B300": "Desert Boss 00 (Moldarach)",
    "B301": "Desert Boss Kraken",
    "S300": "Sand Silent Realm",
    "F400": "Field (Starting Forest)",
    "F401": "Field (First Whirlpool Terrain)",
    "F402": "Temple",
    "F403": "Whirlpool - Past",
    "F404": "Past - First Time",
    "F405": "Cutscene 02 Terrain",
    "F406": "Whirlpool After Temple Union",
    "F407": "Temple Cutscene Terrain",
    "B400": "Last Boss",
    "Demo": "Staff Roll"}


def toStr(bytestr):
    return bytestr.split(b'\x00',1)[0].decode('shift-jis')

def unpack(fields, formatstr, item):
    return collections.namedtuple('_',fields)._make(struct.unpack(formatstr,item))._asdict()

def encodeBytes(bytestr):
    return ' '.join(['%02X'%x for x in bytestr])

def objToJson(parsed):
    return json.dumps(parsed,indent=4,ensure_ascii=False,allow_nan=False,default=encodeBytes)



def parseBzs(data):
    name,count,ff,offset = struct.unpack('>4shhi',data[:12])
    name = name.decode('ascii')
    return parseObj(name, count, data[offset:])

def parseObj(objtype, quantity, data):
    if objtype == 'V001':
        #root
        parsed = collections.OrderedDict()
        for i in range(quantity):
            addr = i*12
            name,count,ff,offset = struct.unpack('>4shhi',data[addr:addr+12])
            name = name.decode('ascii')
            parsed[name]=parseObj(name,count,data[addr+offset:])
            #if name != 'LAY ':
            #    parsed[name]=len(parsed[name])
        return parsed
    elif objtype == 'LAY ':
        #different layers of the room (always 29 of them)
        assert quantity == LAYERCOUNT
        parsed = {}
        for i in range(quantity):
            addr = i*8
            count,ff,offset = struct.unpack('>hhi',data[addr:addr+8])
            parsed['l%d'%i] = parseObj('V001',count,data[addr+offset:])
        return parsed
            
    elif objtype in ('OBJN','ARCN'):
        parsed = []
        for i in range(quantity):
            addr = data[2*i]*0x100 + data[2*i+1]
            name = toStr(data[addr:])
            parsed.append(name)
        return parsed
    elif objtype == 'RMPL':
        parsed = collections.OrderedDict()
        for i in range(quantity):
            rmpldata = data[4*i:]
            rmpl_id = rmpldata[0]
            count = rmpldata[1]
            addr = rmpldata[2]*0x100 + rmpldata[3]
            parsed[rmpl_id] = []
            for j in range(count):
                parsed[rmpl_id].append(rmpldata[addr+2*j:addr+2*j+2])
        return parsed

    else:
        parsed = []
        for i in range(quantity):
            item = data[sizes[objtype]*i:sizes[objtype]*(i+1)]

            if objtype == 'FILE':
                assert quantity == 1
                parsed_item = item
                return parsed_item
            elif objtype == 'SCEN':
                parsed_item = unpack('name unk','>32s8s',item)
                parsed_item['name'] = toStr(parsed_item['name'])
            elif objtype == 'CAM ':
                parsed_item = unpack('unk1 posx posy posz angle unk2 name','>4s3ff8s16s', item)
                parsed_item['name'] = toStr(parsed_item['name'])
            elif objtype in ('PATH','SPTH'):
                parsed_item = item
            elif objtype in ('PNT ','SPNT'):
                parsed_item = unpack('posx posy posz unk','>3f4s',item)
            elif objtype == 'BPNT':
                parsed_item = unpack('pos1x pos1y pos1z pos2x pos2y pos2z pos3x pos3y pos3z unk','>3f3f3f4s',item)
            elif objtype == 'AREA':
                parsed_item = unpack('posx posy posz sizex sizey sizez unk','>3f3f8s',item)
            elif objtype == 'EVNT':
                parsed_item = unpack('unk name','>24s32s',item)
                parsed_item['name'] = toStr(parsed_item['name'])
            elif objtype == 'PLY ':
                parsed_item = unpack('unk1 posx posy posz unk2','>4s3f8s',item)
            elif objtype in ('OBJS','OBJ ','DOOR'):
                parsed_item = unpack('unk1 posx posy posz event_flag unk2 talk_behaviour unk3 name','>8s3fb3sh2s8s',item)
                parsed_item['name'] = toStr(parsed_item['name'])
            elif objtype in ('SOBS','SOBJ','STAS','STAG','SNDT'):
                parsed_item = unpack('unk1 posx posy posz sizex sizey sizez unk2 name','>8s3f3f8s8s',item)
                parsed_item['name'] = toStr(parsed_item['name'])
            
            elif objtype == 'LYSE':
                parsed_item = item
            elif objtype == 'STIF':
                #Stage Info
                assert quantity == 1
                parsed_item = unpack('wtf1 wtf2 wtf3 byte1 flagindex byte3 byte4 unk','>3fbbbb4s',item)
                return parsed_item
            elif objtype == 'PCAM':
                parsed_item = unpack('pos1x pos1y pos1z pos2x pos2y pos2z angle wtf unk','>3f3fff4s',item)
            elif objtype == 'LYLT':
                parsed_item = item
                
            else:
                raise Exception(objtype)
            
            parsed.append(parsed_item)
            
        return parsed

f2=open('out.json','w',encoding='utf-8')

for stageid in os.listdir('Stage'):
    print(stageid+' - '+stagenames[stageid])
    stagepath = 'Stage/%s/%s_stg_l0/dat/stage.bzs'%(stageid,stageid)
    stage = parseBzs(open(stagepath, 'rb').read())
    stage['rooms'] = collections.OrderedDict()
    for i in range(ROOMCOUNT):
        roomid = 'r%02d'%i
        roompath = 'Stage/%s/%s_stg_l0/rarc/%s_r%02d/dat/room.bzs' % (stageid,stageid,stageid,i)
        if os.path.isfile(roompath):
            print(stageid, roomid)
            room = parseBzs(open(roompath, 'rb').read())
            stage['rooms'][roomid]=room
    if 'RMPL' in stage:
        assert len(stage['rooms']) == len(stage['RMPL'])
    else:
        assert len(stage['rooms']) == 1
    f2.write(stageid+' - '+stagenames[stageid]+'\n')
    f2.write(objToJson(stage))
    f2.write('\n')


'''
flag_map = {}

#for fname in glob.glob('stages/**/*.bzs', recursive=True):
#for fname in glob.glob('stages/?0*/**/*.bzs', recursive=True):
for fname in sorted(glob.glob('stages/**/stage.bzs', recursive=True)):
#for fname in glob.glob('stages/F400*/**/*.bzs', recursive=True):
#for fname in glob.glob('stages/F000*/**/*.bzs', recursive=True):
    data=open(fname,'rb').read()
    parsed = parseBzs(data)
    findex = parsed['STIF']['flagindex']
    assert findex < 26 or findex == 0xFF

    if findex not in flag_map:
        flag_map[findex] = collections.OrderedDict()
    flag_map[findex][fname.split('dat')[0]] = True

    #print(fname)
    #print(findex)
    #f2.write(fname+'\n')
    #f2.write(objToJson(parsed))
    #f2.write('\n')
    

all_settable_flags = []
for i in list(range(26)) + [0xFF]:
    print(i)
    settable_flags = [0]*16
    if i in flag_map and i==0:
        for prefix in flag_map[i]:
            for fname in sorted(glob.glob(prefix+'*/**/*.bzs', recursive=True)):
                print(getStageName(fname),'-',fname)
                data=open(fname,'rb').read()
                parsed = parseBzs(data)
                f2.write(fname+'\n')
                f2.write(objToJson(parsed))
                f2.write('\n')
                for key in parsed:
                    for obj in parsed[key]:
                        if type(obj) in (dict, collections.OrderedDict) and 'unk2' in obj:
                            flag = obj['unk2'][0] % 0x80
                            assert 0 <= flag < 0x80
                            flag_high = flag // 8
                            flag_low = flag % 8
                            settable_flags[flag_high ^ 1] |= (1 << flag_low)
                            if i==0 and flag in (0x32,0x3D,0x64,0x77):
                                print('!!!!'+fname+" - layer%02d - "%j+objtype + ' (%02X)'%flag)
                                print(objToJson(obj))
                for j in range(LAYERCOUNT):
                    for objtype in parsed['LAY ']["layer%02d"%j]:
                        for obj in parsed['LAY ']["layer%02d"%j][objtype]:
                            if 'unk2' not in obj:
                                continue
                            flag = obj['unk2'][0] % 0x80
                            assert 0 <= flag < 0x80
                            flag_high = flag // 8
                            flag_low = flag % 8
                            settable_flags[flag_high ^ 1] |= (1 << flag_low)
                            if i==0 and flag in (0x32,0x3D,0x64,0x77):
                                print('!!!!'+fname+" - layer%02d - "%j+objtype + ' (%02X)'%flag)
                                print(objToJson(obj))
    all_settable_flags.append(settable_flags)

print('--- Settable flags ---')
print(' '*26+' '.join(['%02X'%x for x in range(0x50,0x60)]))
print(' '*26+'-'*(16*3-1))
for i in range(len(all_settable_flags)):
    print(('%24s: '%flagindex_names[i]) + ' '.join(['%02X'%x for x in all_settable_flags[i]]))
'''


f2.close()
