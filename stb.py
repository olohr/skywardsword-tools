import glob
import collections
import struct
from util import *

for fname in glob.glob('Stage/**/*.stb', recursive=True):
    print(fname)
    f = open(fname,'rb')
    f.seek(0x20)

    parsed = []

    while True:
        seg_header = f.read(0x8)
        if len(seg_header) <= 0:
            break
        seg_len, seg_id = struct.unpack('>i4s',seg_header)
        seg_data = f.read(seg_len-0x8)

        parsed_item = collections.OrderedDict()
        parsed_item['seg_len'] = seg_len
        parsed_item['seg_id'] = str(seg_id)
        parsed_item['seg_data'] = seg_data
        parsed_item['seg_data2'] = str(seg_data)

        if seg_id == b'JFVB':
            #animated actions (camera_
            pass
        elif seg_id == b'\xff\xff\xff\xff':
            pass
        elif seg_id == b'JACT':
            #actor-related
            pass
        elif seg_id == b'JMSG':
            #text pointers
            pass
        elif seg_id == b'JCMR':
            #camera
            pass
        elif seg_id == b'JPTC':
            pass
        elif seg_id == b'JCTB':
            assert seg_len == 56
        elif seg_id == b'JLIT':
            pass
        else:
            raise Exception('unimplemented ' + str(seg_id))
        
        parsed.append(parsed_item)

    f2 = open('output/demo/%s.json'%fname.replace('/','-').replace('\\','-'),'w')
    f2.write(objToJson(parsed))
    f2.close()
