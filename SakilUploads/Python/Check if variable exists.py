found = 'false'
count = 0
print('Before', found)
for num in [9, 41, 12, 3, 74, 15] :
    count = count + 1
    if num == 3 :
        found = 'True'
        sl = count
    print(found,'Found:', num)
print('Found', 3, 'Serial', sl)
print('After', found)
