#include <bits/stdc++.h>
// Includes all standard libraries (e.g., iostream, string, algorithm, etc.)
// This is a common shortcut in competitive programming to include everything needed.

using namespace std;
// Allows direct usage of standard library features like cin, cout, etc., without the std:: prefix.

int main() {
    int n;
    // Declare an integer variable `n` to store the input number.

    cin >> n;
    // Input the number `n` from the user.

    bool flag = false;
    // Initialize a boolean variable `flag` to false. This will be used to determine if `n` satisfies any of the conditions.

    // Check if `n` is divisible by specific numbers that are "special":
    if (n % 47 == 0 || n % 744 == 0 || n % 4 == 0 || n % 77 == 0 || n % 477 == 0 || n % 7 == 0) {
        flag = true;
        // If any of the conditions are true, set `flag` to true.
    }

    if (flag) {
        cout << "YES" << endl;
        // If `flag` is true, print "YES".
    } else {
        cout << "NO" << endl;
        // Otherwise, print "NO".
    }

    return 0;
    // End of the program.
}

