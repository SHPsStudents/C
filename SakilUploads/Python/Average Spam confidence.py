
fname = input("Enter file name: ")
fh = open(fname)
ndata = 0
count = 0
for line in fh:
    if not line.startswith("X-DSPAM-Confidence:") :
        continue
    ipos = line.find(':')
    fpos = line.find(' ',ipos+2)
    pos = line[ipos+2:fpos]
    adata = float(pos)
    ndata = ndata + adata
    count = count + 1
print('Average spam confidence: ', ndata/count, end = '')
