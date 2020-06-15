fname = input('Enter a file name: ')
try:
    fhand = open(fname)
except:
    print(fname, 'could not be opened')
    quit()

count = 0
for line in fhand:
    if line.startwith('Subject') :
        count = count + 1
print('There were', count, 'subjects in this file')
