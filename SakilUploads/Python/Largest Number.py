largest = None
print('Before', largest)
for num in [9, 41, 12, 3, 74, 15] :
    if largest is None:
        largest = num
    elif num > largest:
        largest = num
    print(largest, num)
print('After', largest)
