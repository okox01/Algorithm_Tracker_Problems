#include <iostream>
#include <string>
#include <stack>

using namespace std;

string will_first_player_win(const string &s) {
    stack<char> char_stack;

    // Use a stack to simulate the removal of pairs
    for (char c : s) {
        // If the stack is not empty and the top element is the same as current, pop the stack
        if (!char_stack.empty() && char_stack.top() == c) {
            char_stack.pop(); // Remove the pair
        } else {
            char_stack.push(c); // Push the current character
        }
    }

    // The number of removals is determined by the original length of the string minus the stack size
    int pairs_count = (s.length() - char_stack.size()) / 2;

    // Determine the winner based on the count of pairs
    return (pairs_count % 2 == 1) ? "Yes" : "No";
}

int main() {
    string s;
    cin >> s;

    cout << will_first_player_win(s) << endl;
    return 0;
}
