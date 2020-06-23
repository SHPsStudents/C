fname = input('Enter file name: ')
fh = open(fname)
lines = list()
words = []

for line in fh:
    line.rstrip()
    words = line.split()
    for word in words:
        if word in lines :continue
        lines.append(word)
lines.sort()
print(lines)
