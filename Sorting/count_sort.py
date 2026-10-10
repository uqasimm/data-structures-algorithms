# NO NEED TO WRITE THIS, USE BUILT IN FUNCTIONS

# def findMax(arr, n):
#     max_number = arr[0]
#     for i in range(n):
#         if(max_number < arr[i]):
#             max_number = arr[i]

#     return max_number

# THIS IS INEFFICIENT AND WOULD WASTE LARGE MEMORY SPACE FOR ARRAYS LIKE [1001, 1002, 1003]

# def countSort(arr):
#     n = len(arr)
#     maximum_value = findMax(arr, n)

#     count = [0] * (maximum_value + 1)

#     for i in range(n):
#         count[arr[i]] += 1

#     # j is the counter for count array, k is the counter for given array which is to be sorted

#     j = 0
#     k = 0

#     while(j <= maximum_value):
#         if(count[j] > 0):
#             arr[k] = j
#             count[j] -= 1
#             k += 1
#         else:
#             j += 1

#     return arr

def count_sort(arr):
    min_value = min(arr)
    max_value = max(arr)

    range_for_elements = max_value - min_value + 1

    count = [0] * range_for_elements

    for num in arr:
        count[num - min_value] += 1

    k = 0
    for i, freq in enumerate(count):
        for _ in range(freq):
            arr[k] = i + min_value
            k += 1

    return arr

arr = [3,1,9,7,1,2,4]
print(count_sort(arr))