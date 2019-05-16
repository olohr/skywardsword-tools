import glob

def printHex(bytestr):
    print(' '.join('%02X'%x for x in bytestr))

def bitOr(bytestr1, bytestr2):
    return bytes([a|b for a,b in list(zip(bytestr1,bytestr2))])

skyloft_cumulative = b'\x00'*0x10
sacredgrounds_cumulative = b'\x00'*0x10

for name in glob.glob('wiiking*sav'):
    f = open(name, 'rb')
    for addr,n in ((0x1A84,1),(0x6E44,2),(0xC204,3)):
        #print(name+'-'+str(n))
        f.seek(addr)
        skyloft = f.read(0x10)
        f.read(0x10)
        f.read(0x10)
        f.read(0x10)
        f.read(0x10)
        f.read(0x10)
        f.read(0x10)
        f.read(0x10)
        f.read(0x10)
        f.read(0x10)
        sacredgrounds = f.read(0x10)

        #printHex(skyloft)
        #printHex(sacredgrounds)
        skyloft_cumulative = bitOr(skyloft_cumulative, skyloft)
        sacredgrounds_cumulative = bitOr(sacredgrounds_cumulative, sacredgrounds)

print('-----------------------------------------------')
print('50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F')
print('-----------------------------------------------')
printHex(skyloft_cumulative)
printHex(sacredgrounds_cumulative)

def printBits(bytestr):
    print('Address:\t0x80\t0x40\t0x20\t0x10\t0x08\t0x04\t0x02\t0x01')
    for i in range(16):
        print('%X'%(0x805AAB50+i),end='')
        for j in range(8):
            bit = (bytestr[i] >> (7-j)) & 1
            print('\t'+str(bit), end='')
        print()
    print()

printBits(skyloft_cumulative)
printBits(sacredgrounds_cumulative)

