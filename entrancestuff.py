import json
import glob
import os.path
from collections import OrderedDict, defaultdict
from util import *

# stage, room, entrance object
all_entrances=[]

# fromstage, fromroom, exitid, exit object
all_exits=[]

used_layers=defaultdict(set)

for fil in glob.glob('output/stage/*.json'):
    with open(fil) as f:
        stageid=os.path.split(fil)[-1][:-5]
        data=json.load(f)
        for roomid, room in data['rooms'].items():
            rid=int(roomid[1:])
            for eid, ext in enumerate(room.get('SCEN',[])):
                all_exits.append(OrderedDict(fromstage=stageid, fromroom=rid, exitid=eid, **ext))
            for entr in room.get('PLY ', []):
                all_entrances.append(OrderedDict(stage=stageid, room=rid, **entr))

# stage, room, entranceid
entrance_set={}
for entrance in all_entrances:
    entrance_set[(entrance['stage'], entrance['room'], entrance['entrance_id'])]=entrance

exit_set={}
for eexit in all_exits:
    exit_set[(eexit['name'], eexit['room'], eexit['entrance'])]=eexit
    used_layers[eexit['name']].add(eexit['layer'])

from allobjects import raw_stages, totally_all_objects
for stageid, stage in raw_stages.items():
    for layermapping in stage.get('LYSE',[]):
        used_layers[stageid].add(layermapping['layer'])

unused_layers=defaultdict(set)
for obj in totally_all_objects:
    if not obj['layerid'] in used_layers[obj['stageid']] and obj['layerid'] != 0:
        unused_layers[obj['stageid']].add(obj['layerid'])

unused_layers=sorted(unused_layers.items(), key=lambda x: x[0])
for stageid, layers in unused_layers:
    print('\n'+stageid+' ('+stagenames[stageid]+'):\n'+', '.join(map(lambda x: str(x),layers)))
#for eexit in all_exits:
#    try:
#        del entrance_set[(eexit['name'], eexit['room'], eexit['entrance'])]
#    except KeyError:
#        pass