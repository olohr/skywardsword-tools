import glob

def printHex(bytestr):
    print(' '.join('%02X'%x for x in bytestr))

def bitOr(bytestr1, bytestr2):
    return bytes([a|b for a,b in list(zip(bytestr1,bytestr2))])

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
                   "Skyloft: Silent Realm"]

cumulative = [b'\x00'*0x10]*len(flagindex_names)
cumulative_story = b'\x00'*0x96

for name in glob.glob('C:/Users/Matt/Documents/Games/dolphin-master-5.0-x64/wiiking*sav'):
    if 'seg28' not in name:
        continue
    f = open(name, 'rb')
    for i in range(3):
        addr_sceneflags = 0x1A84 + 0x53C0*i
        addr_storyflags = 0x904 + 0x53C0*i
        #print(name+'-'+str(n))
        f.seek(addr_sceneflags)
        for j in range(len(flagindex_names)):
            flags = f.read(0x10)
            cumulative[j] = bitOr(cumulative[j], flags)
        f.seek(addr_storyflags)
        story = f.read(0x96)
        cumulative_story = bitOr(cumulative_story, story)

print('-----------------------------------------------')
print('50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F')
print('-----------------------------------------------')
for i in range(len(flagindex_names)):
    print(flagindex_names[i])
    printHex(cumulative[i])

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
print('---')
#printBits(0x805A9AD8, cumulative_story)

