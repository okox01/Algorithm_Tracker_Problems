#include <iostream>
#include <string>
using namespace std;

bool isSingleSegment(const string& s) {
    // Remove leading and trailing '0's to focus only on the '1's segment
    int firstOne = s.find('1');
    int lastOne = s.rfind('1');

    if (firstOne == string::npos) {
        // No '1's in the string, so the segment is empty
        return false;
    }

    // Check if all characters between the first and last '1' are indeed '1's
    for (int i = firstOne; i <= lastOne; ++i) {
        if (s[i] != '1') {
            return false;
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;
        if (isSingleSegment(S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
