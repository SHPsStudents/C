fname = input('Enter a file name: ')
try:
    fhand = open(fname)
except:
    print(fname, 'could not be opened')
    quit()
for line in fhand:
    line =line.rstrip()
    print(line.upper())
