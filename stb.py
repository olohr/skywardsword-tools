import glob
import collections
import struct
from util import *

def chunks(lst, n):
    """Yield successive n-sized chunks from lst."""
    for i in range(0, len(lst), n):
        yield lst[i:i + n]

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
        chunked = list(chunks(seg_data, 4))
        parsed_item['seg_data'] = chunked
        parsed_item['seg_data2'] = [str(x) for x in chunked]

        if seg_id == b'JFVB':
            #animated actions (camera_
            pass
        elif seg_id == b'\xff\xff\xff\xff':
            pass
        elif seg_id in (b'JMSG',b'JCMR',b'JACT'):
            # JMSG: text pointers
            # JCMR: camera
            # JACT: actor-related
            del parsed_item['seg_data']
            del parsed_item['seg_data2']
            header = unpack('unk type','>i8s',seg_data[:12])
            header['type'] = toStr(header['type'])
            parsed_item['main'] = header
            parsed_item['subsegs']=[]
            # assert header['five'] == 5
            # assert header['msg'] == '$msg'
            idx=12
            while True:
                subtype, unk1, unk2 = struct.unpack('>BBh', seg_data[idx:idx+4])
                assert subtype in (0, 2, 128)
                if subtype == 0:
                    break
                idx+=4
                if subtype == 0x80:
                    subseg_data = seg_data[idx:idx+unk2]
                    if seg_id == b'JMSG':
                        parsed_item['subsegs'].append(
                            {
                                'subtype': subtype,
                                'unk1':unk1,
                                'unk2':unk2, # length
                                'unk3':subseg_data[:4],
                                'text':toStr(subseg_data[4:]),
                            }
                        )
                    else:
                        chunked = list(chunks(subseg_data, 4))
                        parsed_item['subsegs'].append(
                            {
                                'subtype': subtype,
                                'unk1':unk1,
                                'unk2':unk2, # length
                                'bytes':chunked,
                                'bytes2':[str(x) for x in chunked],
                            }
                        )
                    idx+=unk2
                else:
                    parsed_item['subsegs'].append(
                        {
                            'subtype': subtype,
                            'unk1':unk1,
                            'unk2':unk2,
                        }
                    )
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
