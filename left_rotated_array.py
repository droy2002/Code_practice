def left_rotate(arr, k):
    n = len(arr)
    k = k % n  # if k is larger than array size
    rotated_array = arr[k:] + arr[:k]
    return rotated_array

input= [1, 2, 3, 4, 5]
k = 2
output = left_rotate(input, k)
print(output) 