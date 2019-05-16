import glob
import pprint

flags_set = []

for fname in glob.glob('text/*.msbf'):
    print(fname)
    f = open(fname,'rb')
    f.seek(0x30)
    count = int.from_bytes(f.read(2),'big')
    f.read(0x0E)
    for i in range(count):
        entry = f.read(0x10)
        if True or entry[0xA] == 0 and entry[0xB] == 2: #set flag
            flag = entry[5]
            #if flag == 0x24:
            if flag == 0x32 or flag == 0x3D or flag == 0x64 or flag == 0x77 or flag == 0xFF: #useful
                flags_set.append(('%s-%02X'%(fname[5],flag), fname, entry[0xA:0x0C].hex()))

flags_set.sort()
pprint.pprint(flags_set)
