# NO NEED TO WRITE THIS, USE BUILT IN FUNCTIONS

# def findMax(arr, n):
#     max_number = arr[0]
#     for i in range(n):
#         if(max_number < arr[i]):
#             max_number = arr[i]

#     return max_number

# THIS IS INEFFICIENT AND WOULD WASTE LARGE MEMORY SPACE FOR ARRAYS LIKE [1001, 1002, 1003]

def countSort(arr):
    n = len(arr)
    # maximum_value = findMax(arr, n)
    maximum_value = max(arr)

    count = [0] * (maximum_value + 1)

    for i in range(n):
        count[arr[i]] += 1

    for i in range(1, maximum_value + 1):
        count[i] += count[i - 1]

    output = [0] * n

    for i in range(n - 1, -1, -1):
        output[count[arr[i]] - 1] = arr[i]
        count[arr[i]] -= 1

    return output

# def count_sort(arr):
#     min_value = min(arr)
#     max_value = max(arr)

#     range_for_elements = max_value - min_value + 1

#     count = [0] * range_for_elements

#     for num in arr:
#         count[num - min_value] += 1

#     k = 0
#     for i, freq in enumerate(count):
#         for _ in range(freq):
#             arr[k] = i + min_value
#             k += 1

#     return arr

arr = [3,1,9,7,1,2,4]
print(countSort(arr))