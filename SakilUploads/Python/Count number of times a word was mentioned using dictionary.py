counts = dict()
line = input('Enter a line of text: ')
line = line.lower()

words = line.split()

print('Words:', words)
print('Counting...')

for word in words:
    counts[word] = counts.get(word, 0) + 1
print('Counts', counts)
