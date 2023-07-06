
#include <iostream>
#include <stack>
#include <string>
 
std::string cal_par(const std::string& s) {
    std::stack<int> stack;
    std::string split_str = s;
 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            // If current char is '(' then push its index to the stack
            stack.push(i);
        } else if (s[i] == ')') {
            // If current char is ')' then pop the top of the stack
            if (!stack.empty()) {
                stack.pop();
            } else {
                // If our stack is empty, we can't pop, so make the current char as ''
                split_str[i] = ' ';
            }
        }
    }
 
    while (!stack.empty()) {
        // Clear remaining '(' characters in the stack
        int index = stack.top();
        stack.pop();
        split_str[index] = ' ';
    }
 
    return split_str;
}
 
int main() {
    std::string s = "Techno India (is best (university in (West Bengal)))))";
    std::cout << cal_par(s) << std::endl;
    return 0;
}