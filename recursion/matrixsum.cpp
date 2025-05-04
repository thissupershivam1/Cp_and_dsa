#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void helper(vector<vector<ll> >& a, vector<vector<ll> >& b, ll row, ll col, ll maxrow, ll maxcol) {
    if (row >= maxrow) {
        return;
    }

    if (col == maxcol - 1) {
        cout << a[row][col] + b[row][col] << endl;
        helper(a, b, row + 1, 0, maxrow, maxcol);  // Move to next row, col reset to 0
    } else {
        cout << a[row][col] + b[row][col] << " ";
        helper(a, b, row, col + 1, maxrow, maxcol);
    }
}

int main() {
    ll r, c;
    cin >> r >> c;

    vector<vector<ll> > a(r, vector<ll>(c)), b(r, vector<ll>(c));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    helper(a, b, 0, 0, r, c);

    return 0;
}
