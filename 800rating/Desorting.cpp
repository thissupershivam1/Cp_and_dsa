#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long

int min_operations_to_unsort(const vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            return 0; // Already not sorted
        }
    }

    int res = 1e18;
    for (int i = 0; i < n - 1; ++i) {
        int diff = a[i + 1] - a[i];
        res = min(res, diff / 2 + 1); // Always integer division
    }

    return res;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        cout << min_operations_to_unsort(a) << '\n';
    }

    return 0;
}
