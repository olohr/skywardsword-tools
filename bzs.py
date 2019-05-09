import struct
import glob

lengthmap = {b'V001':12,
             b'STIF':20,
             b'RMPL':4,
             b'LYLT':4,
             b'LYSE':4,
             b'OBJN':2,
             b'FILE':4,
             b'SCEN':40,
             b'CAM ':44,
             b'PATH':12,
             b'PNT ':16,
             b'AREA':32,
             b'EVNT':56,
             b'PLY ':24,
             b'STAG':48,
             b'ARCN':14,
             b'BPNT':40,
             b'SOBJ':48,
             b'PCAM':36,
             b'LAY ':8,
             b'OBJS':36,
             b'OBJ ':36,
             b'STAS':48,
             b'SNDT':48,
             b'DOOR':36}

activated_events = {}

for fname in glob.glob('room_goron.bzs'):
    print(fname)
    f=open(fname,'rb').read()
    headername,headercount,ff,headeroffset = struct.unpack('>4sHHI',f[:12])
    print(headername,headercount,ff,'%X'%headeroffset)
    for i in range(headercount):
        headeraddr = headeroffset+lengthmap[headername]*i
        name,count,ff,offset = struct.unpack('>4sHHI',f[headeraddr:headeraddr+12])

        addr = headeraddr+offset
        addrend = addr+lengthmap[name]*count
        print(name.decode('ascii') + ': x%d [%X - %X]'%(count,addr,addrend))

        if name == b'LAY ':
            for j in range(count):
                layheaderaddr = addr+8*j
                laycount,ff,layoffset = struct.unpack('>HHI',f[layheaderaddr:layheaderaddr+8])
                if layoffset != 0:
                    layaddr = layheaderaddr+layoffset
                    print('x%d [%X]'%(laycount,layaddr))
                    for k in range(laycount):
                        layitemheaderaddr = layaddr+lengthmap[b'V001']*k
                        layitemname,layitemcount,ff,layitemoffset = struct.unpack('>4sHHI',f[layitemheaderaddr:layitemheaderaddr+12])

                        layitemaddr = layitemheaderaddr+layitemoffset
                        layitemaddrend = layitemaddr+lengthmap[layitemname]*layitemcount
                        print(layitemname.decode('ascii') + ': x%d [%X - %X]'%(layitemcount,layitemaddr,layitemaddrend))
                        if layitemname in(b'OBJ ',b'STAG'):
                            for l in range(layitemcount):
                                actuallayitemaddr = layitemaddr+lengthmap[layitemname]*l
                                itemdata = f[actuallayitemaddr:actuallayitemaddr+lengthmap[layitemname]]
                                objname = itemdata[-8:]
                                if layitemname == b'OBJ ':
                                    event_to_activate = f[actuallayitemaddr+20]
                                    print(('%02X - ' % event_to_activate) + objname.rstrip(b'\x00').decode('ascii') + ' - ' + itemdata.hex())
                                    activated_events[('%02X' % event_to_activate)] = objname.rstrip(b'\x00').decode('ascii')
                                else:
                                    print(objname.rstrip(b'\x00').decode('ascii') + ' - ' + itemdata.hex())
                        if layitemname == b'OBJN':
                            for l in range(layitemcount):
                                actuallayitemaddr = layitemaddr + 0x100*f[layitemaddr+lengthmap[layitemname]*l] + f[layitemaddr+lengthmap[layitemname]*l+1]
                                objname = f[actuallayitemaddr:].split(b'\x00',1)[0]
                                print(objname.decode('ascii'))
        
    print('%X'%len(f))
    print()

print(activated_events)
