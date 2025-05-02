#include <iostream>
using namespace std;
typedef long long ll;

// Recursive function to print digits with space, but no trailing space
void solve(ll n) {
    if (n < 10) {
        // Only one digit, print without space
        cout << n;
        return;
    }

    solve(n / 10);            // Print higher digits first
    cout << " " << (n % 10);  // Then print current digit with space
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        solve(n);      // Call the recursive function
        cout << endl;  // Newline after each number
    }

    return 0;
}
