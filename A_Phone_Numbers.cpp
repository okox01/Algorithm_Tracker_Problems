#include <bits/stdc++.h> 
// Includes all standard libraries (iostream, string, algorithm, etc.)
// This is commonly used in competitive programming for convenience.

using namespace std;
// Allows direct use of standard functions and classes like cin, cout, string, etc., without prefixing with std::.

int main() { 
    int n; 
    // Variable to store the number of cards (digits).

    string s; 
    // String to store the sequence of digits.

    cin >> n; 
    // Input the number of digits.

    cin >> s; 
    // Input the string of digits (length = n).

    int count8 = 0; 
    // Variable to count the number of '8' characters in the string.

    for (char c : s) { 
        // Loop through each character in the string `s`.
        if (c == '8') { 
            // Check if the character is '8'.
            count8++; 
            // Increment the count of '8' if condition is true.
        }
    }

    int MaxPhoneNumbers = min(count8, n / 11); 
    // Calculate the maximum number of phone numbers:
    // 1. `count8` is the number of '8's available.
    // 2. `n / 11` is the total number of complete sets of 11 digits we can use.
    // Take the minimum of these two to get the maximum number of valid phone numbers.

    cout << MaxPhoneNumbers << endl; 
    // Output the result (maximum number of phone numbers).

    return 0; 
    // End of the program.
}
