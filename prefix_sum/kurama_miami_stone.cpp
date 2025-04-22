#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <cstring>
#include <climits>

using namespace std;

// ---------------------- Fast I/O ----------------------
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'

// ---------------------- Typedefs ----------------------
#define int long long
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;

// ---------------------- Macros ----------------------
#define all(v) v.begin(), v.end()
#define pb push_back
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"

// ---------------------- Constants ----------------------
const int INF = 1e18;
const int MOD = 1e9 + 7;

// ---------------------- Utility Functions ----------------------
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

// ---------------------- Solve Function ----------------------
void solve() {
    int n;
    cin>>n;
    vector<int> f(n),s(n),p1(n+1,0),p2(n+1,0); 
    for (int i = 0; i < n; ++i) {
        cin >> f[i];
        s[i] = f[i];
    }
    sort(all(s));

    for (int i = 1; i <= n; ++i) {
        p1[i] = p1[i - 1] + f[i - 1];
        p2[i] = p2[i - 1] + s[i - 1];
    }

    int x;
    cin>>x;
    while(x--){
        int turn,l,r;
        cin>>turn>>l>>r;
        int ans=0;

        if(turn==1){
            ans=p1[r]-p1[l-1];
        }
        else{
            ans=p2[r]-p2[l-1];
        }
        cout<<ans<<endl;
    }


    

}

// ---------------------- Main Function ----------------------
int32_t main() {
    fast_io;

        solve();
    return 0;
}
