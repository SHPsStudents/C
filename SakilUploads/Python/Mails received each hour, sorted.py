fname = input('Enter file:')
try: file = open(fname)
except: print('Error!')

counts = dict()
for line in file:
    line.rstrip()
    if not line.startswith('From '): continue
    words = line.split()
    word = words[5].split(':')
    counts[word[0]] = counts.get(word[0], 0) + 1
for h, r in sorted(counts.items()):
    print(h,r)
