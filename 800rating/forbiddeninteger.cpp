#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;


        if (x != 1) {
            // We can use '1', so we can always use 'n' number of 1's to sum to 'n'
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; ++i) cout << 1 << " ";
            cout << "\n";
        } else {
            // x == 1, we cannot use 1. Use 2 or 3 to form the sum if possible.
            if (k == 1) {
                // Only number is 1, which is not allowed
                cout << "NO\n";
            } else if (k >= 2) {
                if (n % 2 == 0) {
                    // Use only 2s
                    cout << "YES\n";
                    cout << n / 2 << "\n";
                    for (int i = 0; i < n / 2; ++i) cout << 2 << " ";
                    cout << "\n";
                } else if (k >= 3) {
                    // Use one 3 and the rest 2s
                    cout << "YES\n";
                    cout << (n - 3) / 2 + 1 << "\n";
                    cout << 3 << " ";
                    for (int i = 0; i < (n - 3) / 2; ++i) cout << 2 << " ";
                    cout << "\n";
                } else {
                    cout << "NO\n";
                }
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
