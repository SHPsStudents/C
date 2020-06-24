fname = 'mbox-short.txt'
try : file = open(fname)
except : print('Enter file name properly')
counts = dict()
for line in file:
    if line.startswith('From '):
        words = line.split()
        mail = words[1]
        counts[mail] = counts.get(mail, 0) + 1

bigcount = None
bigmail = None

for mail,count in counts.items():
    if bigcount is None or bigcount < count:
        bigcount = count
        bigmail = mail

print(bigmail, bigcount)
