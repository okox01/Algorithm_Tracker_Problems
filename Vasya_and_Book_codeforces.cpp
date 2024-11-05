#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y, d;
        cin >> n >> x >> y >> d;

        // Case 1: Check if we can directly reach page y from x by moving d pages at a time
        if (abs(y - x) % d == 0) {
            cout << abs(y - x) / d << endl;
            continue;
        }

        // Case 2: Check if we can reach y from either the first or last page
        long long min_steps = 1e18;  // A large value to find the minimum steps
        
        // Check if reaching from the first page (page 1) is possible
        if ((y - 1) % d == 0) {
            long long steps_to_first = (x - 1 + d - 1) / d;
            long long steps_from_first = (y - 1) / d;
            min_steps = min(min_steps, steps_to_first + steps_from_first);
        }

        // Check if reaching from the last page (page n) is possible
        if ((n - y) % d == 0) {
            long long steps_to_last = (n - x + d - 1) / d;
            long long steps_from_last = (n - y) / d;
            min_steps = min(min_steps, steps_to_last + steps_from_last);
        }

        // If min_steps is still large, it means we couldn't reach y
        if (min_steps == 1e18) {
            cout << -1 << endl;
        } else {
            cout << min_steps << endl;
        }
    }
    return 0;
}
