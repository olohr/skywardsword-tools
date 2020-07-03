# used to check if Reverse engineering reveals undocumented scene flags
from util import flag_id_to_sheet_rep, flagindex_to_stages
from allobjects import all_stages, all_scene_flags, all_story_flags, all_ENVTS, raw_stages
import csv
import json

# all_unknown=[]
# flag_kinds = ('setscenefid','unsetscenefid','scenefid')
# for i, stages in enumerate(flagindex_to_stages):
#     if i >= len(all_scene_flags):
#         continue
#     for stage in stages:
#         for obj in all_stages[stage]['allObjects']:
#             for kind in flag_kinds:
#                 if 'extra_info' in obj and kind in obj['extra_info']:
#                     flagid=obj['extra_info'][kind]
#                     if flagid<128:
#                         flagdesc=all_scene_flags[i]['sceneflags'][flagid]
#                         if flagdesc.strip()=='' or '[' in flagdesc:
#                             all_unknown.append(obj)

# with open('allunknown.json','w') as f:
#     json.dump(all_unknown, f, indent=2)

types=set()

for i, stages in enumerate(flagindex_to_stages):
    if i >= len(all_scene_flags):
        continue
    if all_scene_flags[i] == []:
        continue
    result = [[j, flag_id_to_sheet_rep(j), all_scene_flags[i]['sceneflags'][j], []] for j in range(128)]
    # if i != 0:
    #     continue
    for stage in stages:
        for obj in all_stages[stage]['allObjects']:
            for key in obj.get('extra_info',{}).keys():
                if 'scenefid' in key:
                    types.add(key)
                    flagid=obj['extra_info'][key]
                    if flagid<128:
                        result[flagid][3].append(key+':'+obj['name'])
        for room in raw_stages[stage]['rooms'].values():
            for evnt in room.get('EVNT',[]):
                for key in ('sceneflag1', 'sceneflag2'):
                    flagid=evnt[key]
                    if flagid<128:
                        result[flagid][3].append(evnt['name'])
        with open(f'output/flagidx/{i:02}.csv','w') as f:
            writer = csv.writer(f)
            writer.writerows(result)
    

# for r in result:
#     r[3] = ', '.join(r[3])