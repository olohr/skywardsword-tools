import struct
import glob
import pprint

'''
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
             b'DOOR':36}'''

def parseBzs(data):
    name,count,ff,offset = struct.unpack('>4sHHI',data[:12])
    name = name.decode('ascii')
    return parseObj(name, count, data[offset:])

def parseObj(objtype, quantity, data):
    parsed = []
    if objtype == 'V001':
        for i in range(quantity):
            addr = i*12
            name,count,ff,offset = struct.unpack('>4sHHI',data[addr:addr+12])
            name = name.decode('ascii')
            parsed.append({"name":name,"objcount":count,"objs":parseObj(name,count,data[addr+offset:])})
            
    elif objtype == 'OBJN':
        for i in range(quantity):
            addr = data[2*i]*0x100 + data[2*i+1]
            name = data[addr:].split(b'\x00',1)[0].decode('ascii')
            parsed.append(name)
    elif objtype == 'ARCN':
        for i in range(quantity):
            addr = data[2*i]*0x100 + data[2*i+1]
            name = data[addr:].split(b'\x00',1)[0].decode('ascii')
            parsed.append(name)
    elif objtype == 'FILE':
        assert quantity == 1
        parsed.append(' '.join(['%02X'%x for x in data[:4]]))
    elif objtype == 'SCEN':
        for i in range(quantity):
            #not quite sure where the string ends and the rest of the struct begins
            parsed.append({'room':data[40*i:40*i+8].rstrip(b'\x00').decode('ascii'), 'unk':' '.join(['%02X'%x for x in data[40*i+8:40*(i+1)]])})
    elif objtype == 'CAM ':
        for i in range(quantity):
            parsed.append({'data':' '.join(['%02X'%x for x in data[44*i:44*(i+1)-16]]), 'name':data[44*(i+1)-16:44*(i+1)].rstrip(b'\x00').decode('ascii')})
    elif objtype == 'PATH':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[12*i:12*(i+1)]]))
    elif objtype == 'PNT ':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[16*i:16*(i+1)]]))
    elif objtype == 'BPNT':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[40*i:40*(i+1)]]))
    elif objtype == 'SPTH':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[12*i:12*(i+1)]]))
    elif objtype == 'SPNT':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[16*i:16*(i+1)]]))
    elif objtype == 'AREA':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[32*i:32*(i+1)]]))
    elif objtype == 'EVNT':
        for i in range(quantity):
            parsed.append({'data':' '.join(['%02X'%x for x in data[56*i:56*i+24]]), 'name':data[56*i+24:56*(i+1)].rstrip(b'\x00').decode('shift-jis')})
    elif objtype == 'PLY ':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[24*i:24*(i+1)]]))
    elif objtype == 'OBJS':
        for i in range(quantity):
            parsed.append({'data':' '.join(['%02X'%x for x in data[36*i:36*(i+1)-8]]), 'name':data[36*(i+1)-8:36*(i+1)].rstrip(b'\x00').decode('ascii')})
    elif objtype == 'OBJ ':
        for i in range(quantity):
            parsed.append({'data':' '.join(['%02X'%x for x in data[36*i:36*(i+1)-8]]), 'name':data[36*(i+1)-8:36*(i+1)].rstrip(b'\x00').decode('ascii')})
    elif objtype == 'SOBS':
        for i in range(quantity):
            parsed.append({'data':' '.join(['%02X'%x for x in data[48*i:48*(i+1)-8]]), 'name':data[48*(i+1)-8:48*(i+1)].rstrip(b'\x00').decode('ascii')})
    elif objtype == 'SOBJ':
        for i in range(quantity):
            parsed.append({'data':' '.join(['%02X'%x for x in data[48*i:48*(i+1)-8]]), 'name':data[48*(i+1)-8:48*(i+1)].rstrip(b'\x00').decode('ascii')})
    elif objtype == 'DOOR':
        for i in range(quantity):
            parsed.append({'data':' '.join(['%02X'%x for x in data[36*i:36*(i+1)-8]]), 'name':data[36*(i+1)-8:36*(i+1)].rstrip(b'\x00').decode('ascii')})
    elif objtype == 'STAS':
        for i in range(quantity):
            parsed.append({'data':' '.join(['%02X'%x for x in data[48*i:48*(i+1)-8]]), 'name':data[48*i+40:48*(i+1)].rstrip(b'\x00').decode('ascii')})
    elif objtype == 'STAG':
        for i in range(quantity):
            parsed.append({'data':' '.join(['%02X'%x for x in data[48*i:48*(i+1)-8]]), 'name':data[48*i+40:48*(i+1)].rstrip(b'\x00').decode('ascii')})
    elif objtype == 'SNDT':
        for i in range(quantity):
            parsed.append({'data':' '.join(['%02X'%x for x in data[48*i:48*(i+1)-8]]), 'name':data[48*i+40:48*(i+1)].rstrip(b'\x00').decode('ascii')})
        
    elif objtype == 'LYSE':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[4*i:4*(i+1)]]))
    elif objtype == 'STIF':
        assert quantity == 1
        parsed.append(' '.join(['%02X'%x for x in data[:20]]))
    elif objtype == 'RMPL':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[20*i:20*(i+1)]]))
    elif objtype == 'PCAM':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[36*i:36*(i+1)]]))
    elif objtype == 'LYLT':
        for i in range(quantity):
            parsed.append(' '.join(['%02X'%x for x in data[4*i:4*(i+1)]]))
        
    elif objtype == 'LAY ':
        assert quantity == 29
        for i in range(quantity):
            addr = i*8
            count,ff,offset = struct.unpack('>HHI',data[addr:addr+8])
            parsed.append({"objcount":count,"objs":parseObj('V001',count,data[addr+offset:])})
        
    else:
        raise Exception(objtype)
        
    return parsed


#for fname in glob.glob('stages/**/*.bzs', recursive=True):
for fname in glob.glob('stages/F000*/**/*.bzs', recursive=True):
    data=open(fname,'rb').read()
    print(fname)
    parsed = parseBzs(data)
    pprint.pprint(parsed)
