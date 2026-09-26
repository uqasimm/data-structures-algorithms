arr = [10, 1, 5, 7, 20]
n = len(arr)

for i in range(n - 1):
    for j in range(0, n - 1 - i):
        if(arr[j] > arr[j + 1]):
            arr[j], arr[j + 1] = arr[j + 1], arr[j]

print(arr)