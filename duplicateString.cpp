//Using frequency Map

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void printDuplicates(string &input) {
    unordered_map<char, int> Map;

    // Build the frequency map
    for (int i = 0; i < input.length(); i++) {
        Map[input[i]]++;
    }

    // Iterate over the frequency map to print duplicates
    for (const auto& element : Map) {
        if (element.second > 1) {
            cout << "Duplicate: " << element.first << endl;
            cout << "Frequency: " << element.second <<endl;

            // Find and print the indices of the duplicate character
            cout << "Indices: ";
            for (int i = 0; i < input.length(); i++) {
                if (input[i] == element.first) {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
}

int main() {
    string s;
    cout << "Enter String" << endl;
    getline(cin, s);
    printDuplicates(s);

    return 0;
}
