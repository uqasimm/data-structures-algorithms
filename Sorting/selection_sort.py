arr = [10, 1, 5, 7, 20]

for i in range(len(arr) - 1):
    min_value = i
    for j in range(i + 1, len(arr)):
        if(arr[j] < arr[min_value]):
            min_value = j
    # arr[i], arr[min_value] = arr[min_value], arr[i]
    temp = arr[min_value]
    arr[min_value] = arr[i]
    arr[i] = temp

print(arr)