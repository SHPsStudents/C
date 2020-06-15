handle = open('Test.txt','r')
for line in handle:
    if line.startswith('From: '):
        ipos = line.find(' ')
        fpos = line.find(' ',ipos+1)
        pos = line[ipos+1:fpos]
        print(pos)
