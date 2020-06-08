sum = 0
count = 0
while True:
    num = input('Enter number: ')
    if num == 'done':
        break
    try:
        num = float(num)
    except:
        print('Invalid Input')
        continue
    sum = sum + num
    count = count + 1
print(sum, count, sum/count)
