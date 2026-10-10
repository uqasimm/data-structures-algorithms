def bucket_sort(arr):
    n = len(arr)
    if n <= 1:
        return

    min_value = min(arr)
    max_value = max(arr)

    if min_value == max_value:
        return arr

    buckets = [[] for _ in range(n)]

    for num in arr:
        index = int(n * (num - min_value) / (max_value - min_value + 1))
        buckets[index].append(num)

    for bucket in buckets:
        bucket.sort()

    sorted_arr = []
    for bucket in buckets:
        sorted_arr.extend(bucket)

    for i in range(n):
        arr[i] = sorted_arr[i]

    return arr

arr = [0.85, 0.1, 0.6, 0.5, 0.81]
print(bucket_sort(arr))