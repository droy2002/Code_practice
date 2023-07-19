#Write a code in such a way that array[i] is equal to the product of all the elements of array except array[i].
#You have to write a code in O(n) time and without using the division operation.

def product_except_self(nums):
    n = len(nums)
    result = [1] * n

    # Compute the product of all elements to the left of each element
    left_product = 1
    for i in range(n):
        result[i] *= left_product
        left_product *= nums[i]

    # Compute the product of all elements to the right of each element
    right_product = 1
    for i in range(n - 1, -1, -1):
        result[i] *= right_product
        right_product *= nums[i]

    return result


arr = [1,2,3,4]
result = product_except_self(arr)
print(result)