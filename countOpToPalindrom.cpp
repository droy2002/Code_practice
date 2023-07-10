#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minOpToPalindrome(vector<int>& arr) {
    vector<int> tempArr = arr;  // Create a copy of the original array
    int count = 0;
    int i = 0;
    int j = tempArr.size() - 1;

    while (i < j) {
        if (tempArr[i] == tempArr[j]) {
            i++;
            j--;
        } else if (tempArr[i] < tempArr[j]) {
            tempArr[i + 1] += tempArr[i];  // Merge the current and next element
            i++;
            count++;
        } else {
            tempArr[j - 1] += tempArr[j];  // Merge the current and previous element
            j--;
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    int operations = minOpToPalindrome(arr);

    cout << "Minimum number of operations to make the array palindrome: " << operations << endl;

    return 0;
}
