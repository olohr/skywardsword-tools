import struct
import glob
import pprint
import json
import collections
import os
import storyflag

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
                   "Sealed Grounds",
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
    "F000": "Skyloft: Skyloft",
    "F001r": "Skyloft: Knight's Academy",
    "F002r": "Skyloft: Beedle's Airshop",
    "F004r": "Skyloft: Bazaar",
    "F005r": "Skyloft: Orielle & Parrow’s House",
    "F006r": "Skyloft: Repairman Kukiel’s House",
    "F007r": "Skyloft: Piper’s House",
    "F008r": "Skyloft: Inside the Statue of the Goddess",
    "F009r": "Skyloft: Sparring Hall",
    "F010r": "Skyloft: Isle of Songs Tower",
    "F011r": "Skyloft: The Lumpy Pumpkin",
    "F012r": "Skyloft: Demon Guy Batreaux’s House",
    "F013r": "Skyloft: Fortune-teller Sparrot’s House",
    "F014r": "Skyloft: Potion Shop Owner Bertie’s House",
    "F015r": "Skyloft: Scrap Shop Owner Gondo’s House",
    "F016r": "Skyloft: Pipit's House",
    "F017r": "Skyloft: Gear Peddler Rupin’s House",
    "F018r": "Skyloft: Item Check Girl Peatrice’s House",
    "F019r": "Skyloft: Bamboo Island",
    "F020": "The Sky: Sky Field",
    "F021": "The Sky: Cutscene Sky",
    "F023": "The Sky: Thunderhead",
    "D000": "Skyloft: Waterfall Cave",
    "D003_0": "Skyloft: Sky Keep R00 (Enemy)",
    "D003_1": "Skyloft: Sky Keep R01 (Underground)",
    "D003_2": "Skyloft: Sky Keep R02 (Lava)",
    "D003_3": "Skyloft: Sky Keep R03 (Timeshift 2)",
    "D003_4": "Skyloft: Sky Keep R04 (Timeshift 1)",
    "D003_5": "Skyloft: Sky Keep R05 (ツタ系)",
    "D003_6": "Skyloft: Sky Keep R06 (Captain 2)",
    "D003_7": "Skyloft: Sky Keep R07 (Entrance)",
    "D003_8": "Skyloft: Sky Keep R08 Tri Get",
    "S000": "Skyloft: Town Silent Realm",

    "F100": "Faron Woods: Faron Woods",
    "F100_1": "Faron Woods: Inside the Great Tree",
    "F101": "Faron Woods: Deep Woods",
    "F102": "Faron Woods: Lake Floria",
    "F102_1": "Faron Woods: Outside Ancient Cistern",
    "F102_2": "Faron Woods: Faron's Lair",
    "F103": "Faron Woods: Faron Woods (Flooded)",
    "F103_1": "Faron Woods: Forest F3 (Tree Interior)",
    "D100": "Faron Woods: Skyview Temple",
    "D101": "Faron Woods: Ancient Cistern",
    "B100": "Faron Woods: Forest Boss (R00 Ghirahim)",
    "B100_1": "Faron Woods: After Forest Boss (R00 Skyview Spring)",
    "B101": "Faron Woods: Forest Boss (Asura)",
    "B101_1": "Faron Woods: Farore's Candle Room",
    "S100": "Faron Woods: Forest Silent Realm",

    "F200": "Eldin Volcano: Eldin Volcano",
    "F201_1": "Eldin Volcano: Inside Volcano",
    "F201_2": "Eldin Volcano: Volcano F3 (Crater)",
    "F201_3": "Eldin Volcano: Fire Sanctuary Entrance",
    "F201_4": "Eldin Volcano: Volcano Summit - Waterfall",
    "F202": "Eldin Volcano: Volcano F3",
    "F202_1": "Eldin Volcano: Volcano F3 (Fire Dragon Dummy 1)",
    "F202_2": "Eldin Volcano: Volcano F3 (Fire Dragon Dummy 2)",
    "F202_3": "Eldin Volcano: Volcano F3 Completed (Fire Dragon Dummy 1)",
    "F202_4": "Eldin Volcano: Volcano F3 Completed (Fire Dragon Dummy 2)",
    "F210": "Eldin Volcano: Caves",
    "F211": "Eldin Volcano: Thrill Digger",
    "F221": "Eldin Volcano: Volcano F2 (Fire Dragon Room)",
    "D200": "Eldin Volcano: Earth Temple",
    "D201": "Eldin Volcano: Fire Sanctuary (A)",
    "D201_1": "Eldin Volcano: Fire Sanctuary (B)",
    "B200": "Eldin Volcano: Volcano D1 Boss",
    "B201": "Eldin Volcano: Volcano D2 Boss (Ghirahim 2nd Fight)",
    "B201_1": "Eldin Volcano: Volcano D2 Boss (Din's Fire)",
    "B210": "Eldin Volcano: Volcano D1 Boss (Earth Spring)",
    "S200": "Eldin Volcano: Mountain Silent Realm",

    "F300": "Lanayru Desert: Lanayru Desert",
    "F300_1": "Lanayru Desert: Ancient Harbor",
    "F300_2": "Lanayru Desert: Lanayru Mine",
    "F300_3": "Lanayru Desert: Power Generator #1",
    "F300_4": "Lanayru Desert: Power Generator #2",
    "F300_5": "Lanayru Desert: Temple of Time",
    "F301": "Lanayru Desert: Sand Sea Docks",
    "F301_1": "Lanayru Desert: Sand Sea",
    "F301_2": "Lanayru Desert: Pirate Stronghold",
    "F301_3": "Lanayru Desert: Skipper's Retreat",
    "F301_4": "Lanayru Desert: Shipyard",
    "F301_5": "Lanayru Desert: Skipper's Retreat Shack",
    "F301_6": "Lanayru Desert: Desert F2 Timeshift Island",
    "F301_7": "Lanayru Desert: Shipyard Construction Bay",
    "F302": "Lanayru Desert: Lanayru Gorge",
    "F303": "Lanayru Desert: Lanayru Caves",
    "D300": "Lanayru Desert: Lanayru Mining Facility (A)",
    "D300_1": "Lanayru Desert: Lanayru Mining Facility (B)",
    "D301": "Lanayru Desert: Sandship (A)",
    "D301_1": "Lanayru Desert: Sandship (B)",
    "B300": "Lanayru Desert: Desert Boss 00 (Moldarach)",
    "B301": "Lanayru Desert: Desert Boss Kraken",
    "S300": "Lanayru Desert: Sand Silent Realm",

    "F400": "Sealed Grounds: Forest",
    "F401": "Sealed Grounds: Whirlpool",
    "F402": "Sealed Grounds: Temple",
    "F403": "Sealed Grounds: Whirlpool (Past)",
    "F404": "Sealed Grounds: Temple (Past)",
    "F405": "Sealed Grounds: Whirlpool (Cutscene)",
    "F406": "Sealed Grounds: Whirlpool (With Statue)",
    "F407": "Sealed Grounds: Temple (Cutscene)",
    "B400": "Sealed Grounds: Last Boss",

    "Demo": "Staff Roll"}


def toStr(bytestr):
    return bytestr.split(b'\x00',1)[0].decode('shift-jis')

def unpack(fields, formatstr, item):
    return collections.namedtuple('_',fields)._make(struct.unpack(formatstr,item))._asdict()

def encodeBytes(bytestr):
    return ' '.join(['%02X'%x for x in bytestr])

def objToJson(parsed):
    return json.dumps(parsed,indent=4,ensure_ascii=False,allow_nan=False,default=encodeBytes)

global stage_scens
stage_scens = []
story_flags = set()

def parseBzs(data):
    name,count,ff,offset = struct.unpack('>4shhi',data[:12])
    name = name.decode('ascii')
    return parseObj(name, count, data[offset:])

def parseObj(objtype, quantity, data):
    global stage_scens
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
                #link to other stage
                parsed_item = unpack('name room layer entrance byte4 byte5 flag6 zero flag8','>32sbbbbbbbb',item)
                parsed_item['name'] = toStr(parsed_item['name'])
                stage_scens.append(parsed_item)
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
                parsed_item = unpack('byte1 tosky_scen_link scen_link byte4 unk1 posx posy posz                   event_flag unk2 talk_behaviour unk3 name','>bbbb4s3fb3sh2s8s',item)
                parsed_item['name'] = toStr(parsed_item['name'])
            elif objtype in ('SOBS','SOBJ','STAS','STAG','SNDT'):
                parsed_item = unpack('byte1 tosky_scen_link scen_link byte4 unk1 posx posy posz sizex sizey sizez event_flag unk2 talk_behaviour unk3 name','>bbbb4s3f3fb3sh2s8s',item)
                parsed_item['name'] = toStr(parsed_item['name'])
            
            elif objtype == 'LYSE':
                #logic for overriding layer when attempting to load layer 0
                parsed_item = unpack('story_flag night layer','>hbb',item)
                if parsed_item['story_flag'] == -1:
                    print ('\tDefault, night=%d -- layer=%d'%(parsed_item['night'], parsed_item['layer']))
                else:
                    print ('\tFlag %04X (JP %s / US %s), night=%d -- layer=%d'%(parsed_item['story_flag'],
                                                                        storyflag.flagid_to_spreadsheet(False,parsed_item['story_flag']),
                                                                        storyflag.flagid_to_spreadsheet(True,parsed_item['story_flag']),
                                                                        parsed_item['night'],
                                                                        parsed_item['layer']))
                story_flags.add(parsed_item['story_flag'])
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

            #if type(parsed_item)==collections.OrderedDict and 'name' in parsed_item and 'posx' in parsed_item and parsed_item['name']=='saveObj':
            #s    print('\t'+parsed_item['name'], parsed_item['posx'], parsed_item['posy'], parsed_item['posz'], ' -- to sky:', str(stage_scens[parsed_item['tosky_scen_link']]['name']) if parsed_item['tosky_scen_link']>=0 and parsed_item['tosky_scen_link']<len(stage_scens) else 'invalid exit '+str(parsed_item['tosky_scen_link']))
            #if type(parsed_item)==collections.OrderedDict and 'name' in parsed_item and 'posx' in parsed_item and parsed_item['name']=='Door':
            #    print('\t'+parsed_item['name'], parsed_item['posx'], parsed_item['posy'], parsed_item['posz'], ' -- door target:', str(stage_scens[parsed_item['scen_link']]['name']) if parsed_item['scen_link']>=0 and parsed_item['scen_link']<len(stage_scens) else 'invalid exit '+str(parsed_item['scen_link']))
                
            parsed.append(parsed_item)
            
        return parsed



for stageid in os.listdir('Stage'):
    stage_scens = []
    print(stageid+' - '+stagenames[stageid])
    stagepath = 'Stage/%s/%s_stg_l0/dat/stage.bzs'%(stageid,stageid)
    stage = parseBzs(open(stagepath, 'rb').read())
    stage['rooms'] = collections.OrderedDict()
    for i in range(ROOMCOUNT):
        roomid = 'r%02d'%i
        roompath = 'Stage/%s/%s_stg_l0/rarc/%s_r%02d/dat/room.bzs' % (stageid,stageid,stageid,i)
        if os.path.isfile(roompath):
            print(stageid, roomid)
            stage_scens = []
            room = parseBzs(open(roompath, 'rb').read())
            stage['rooms'][roomid]=room
    if 'RMPL' in stage:
        assert len(stage['rooms']) == len(stage['RMPL'])
    else:
        assert len(stage['rooms']) == 1
    f2=open('output/%s.json'%stageid,'w',encoding='utf-8')
    f2.write(objToJson(stage))
    f2.close()


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



