//Here we use Kadane's algorithm to solve Largest sum contiguous Subarray
#include <iostream>
using namespace std;

int maxSumSubarray(int arr[], int size) {
    int max_sum_sofar = 0; //store the maximum sum found so fa
    int max_ending_here = 0; // the sum of the subarray ending at the current index

    for (int i = 0; i < size; i++) {
        max_ending_here += arr[i];

        if (max_ending_here < 0) {
            max_ending_here = 0;
        }

        if (max_sum_sofar < max_ending_here) {
            max_sum_sofar = max_ending_here;
        }
    }

    return max_sum_sofar ;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_sum = maxSumSubarray(arr, size);

    cout << "The largest sum of a contiguous subarray is: " << max_sum << endl;

    return 0;
}
