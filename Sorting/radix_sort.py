def count_for_radix(arr, pos):
    n = len(arr)
    output = [0] * n
    count = [0] * 10

    for i in range(n):
        digit = (arr[i] // pos) % 10
        count[digit] += 1

    for i in range(1, 10):
        count[i] += count[i - 1]

    i = n - 1
    while i >= 0:
        digit = (arr[i] // pos) % 10
        output[count[digit] - 1] = arr[i]
        count[digit] -= 1
        i -= 1

    for i in range(n):
        arr[i] = output[i]

def radix_sort(arr):
    max_value = max(arr)
    pos = 1
    while max_value // pos > 0:
        count_for_radix(arr, pos)
        pos *= 10

    return arr

arr = [170, 45, 75, 90, 802, 24, 2, 66]
print(radix_sort(arr))