#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int minimizeMaxDifference(vector<int>& heights, int k) {
    sort(heights.begin(), heights.end()); 
    
    int minHeight = heights[0]; // Initial minimum height
    int maxHeight = heights[heights.size() - 1]; // Initial maximum height
    int maxDiff = maxHeight - minHeight; // Initial maximum difference between heights
    
    for (int i = 1; i < heights.size() - 1; i++) {
        int currMinHeight = min(minHeight + k, heights[i] - k); // Calculate current minimum height
        int currMaxHeight = max(maxHeight - k, heights[i] + k); // Calculate current maximum height
        
        minHeight = min(minHeight, currMinHeight); // Update minimum height
        maxHeight = max(maxHeight, currMaxHeight); // Update maximum height
        
        maxDiff = max(maxDiff, maxHeight - minHeight); // Update maximum difference if necessary
    }
    
    return maxDiff;
}

int main() {
    vector<int> heights = {1, 6, 8, 10};
    int k = 3;

    int result = minimizeMaxDifference(heights, k);
    cout << "Minimum maximum difference between heights: " << result;

    return 0;
}
