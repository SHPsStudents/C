sum = 0
count = 0
st1 = 'YES'
while st1 == 'YES':
    num = input('Enter number: ')
    if num == 'done':
        break
    try:
        num = int(num)
    except:
        print('Bad data')
        continue
    sum = sum + num
    count = count + 1
print(sum, count, sum/count)
