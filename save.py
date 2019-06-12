import glob
from util import *

cumulative = [b'\x00'*0x10]*len(flagindex_names)
cumulative_story = b'\x00'*0x89
cumulative_all = b'\x00'*0x53C0

for name in glob.glob('C:/Users/Matt/Documents/Games/dolphin-master-5.0-x64/wiiking*sav'):
    f = open(name, 'rb')
    for i in range(3):
        addr_base = 0x20 + 0x53C0*i

        f.seek(addr_base + 0x1A64)
        for j in range(len(flagindex_names)):
            cumulative[j] = bitOr(cumulative[j], f.read(0x10))
            
        f.seek(addr_base + 0x8E4)
        cumulative_story = bitOr(cumulative_story, f.read(0x89))
        
        f.seek(addr_base)
        cumulative_all = bitOr(cumulative_all, f.read(0x53C0))

print('-----------------------------------------------')
print('50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F')
print('-----------------------------------------------')
for i in range(len(flagindex_names)):
    print(flagindex_names[i])
    printHex(cumulative[i])

print('---')
printHex(cumulative_story)
#print('---')
#printHex(cumulative_all)

f2=open('output/save-cumulative-all.bin','wb')
f2.write(cumulative_all)
f2.close()

def printBits(base, bytestr):
    print('Address:\t0x80\t0x40\t0x20\t0x10\t0x08\t0x04\t0x02\t0x01')
    for i in range(len(bytestr)):
        print('%X'%(base+i),end='')
        for j in range(8):
            bit = (bytestr[i] >> (7-j)) & 1
            print('\t'+str(bit), end='')
        print()
    print()

#printBits(0x805AAB50, cumulative[0])
#print('---')
#printBits(0x805A9AD8, cumulative_story)

