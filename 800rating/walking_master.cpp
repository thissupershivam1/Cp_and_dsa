#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b) {
            cout << -1 << endl;
            continue;
        }

        long long dy = d - b;
        long long x_after_diagonals = a + dy;

        if (x_after_diagonals < c) {
            cout << -1 << endl;
        } else {
            // dx = how much we need to move left after diagonal moves
            long long dx = x_after_diagonals - c;
            cout << dy + dx << endl;
        }
    }

    return 0;
}
