cumulative = 0
count = 0
print('Before', cumulative)
for num in [9, 41, 12, 3, 74, 15] :
    cumulative = cumulative + num
    count = count + 1
    print(cumulative, num)
print('After', count, cumulative, cumulative/count)
