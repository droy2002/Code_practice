To find the largest sum contiguous subarray in C++, you can use the Kadane's algorithm. Here's the step-by-step process to implement it:

1. Initialize two variables: `max_so_far` and `max_ending_here`, both initialized to 0. 
2. Iterate through each element of the array.
3. For each element:
   a. Add the current element to `max_ending_here`.
   b. If `max_ending_here` becomes negative, set it to zero.
   c. If `max_ending_here` is greater than `max_so_far`, update `max_so_far` with the new value.
4. After the loop, `max_so_far` will contain the maximum sum of the contiguous subarray.

Here's the C++ code implementation:

```cpp
#include <iostream>
using namespace std;

int maxSumSubarray(int arr[], int size) {
    int max_so_far = 0;
    int max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here += arr[i];

        if (max_ending_here < 0) {
            max_ending_here = 0;
        }

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
    }

    return max_so_far;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_sum = maxSumSubarray(arr, size);

    cout << "The largest sum of a contiguous subarray is: " << max_sum << endl;

    return 0;
}
```

In this code, we are finding the largest sum of a contiguous subarray in the given array `arr[]`. The `maxSumSubarray` function takes the array and its size as parameters and returns the maximum sum. We initialize `max_so_far` and `max_ending_here` to 0. Then, we iterate through each element of the array, updating `max_ending_here` and `max_so_far` depending on the current element's value. Finally, we return `max_so_far`, which contains the largest sum of a contiguous subarray.

In the provided example, the largest sum of a contiguous subarray is 7, which corresponds to the subarray {4, -1, -2, 1, 5}.