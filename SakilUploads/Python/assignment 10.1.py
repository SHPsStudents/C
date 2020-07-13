import re
filename = input('Enter filename: ')
try :
    hand = open(filename)
except:
    print('File not readable.')
sum = 0
count = 0
for line in hand:
    line = line.rstrip()
    numbers = re.findall('[0-9]+', line)
    if len(numbers) == 0 : continue #lines could contain more than set of numbers
    for number in numbers:
        number = int(number)
        sum = sum + number
        count = count + 1
print(sum, count)
