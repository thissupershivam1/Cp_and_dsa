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

    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i&&arr.back()>x){
            arr.push_back(1);
        }
        arr.push_back(x);
    }
    cout<<arr.size()<<endl;
    for(auto it :arr){
        cout<<it<<" ";
    }
    cout<<endl;
    
}

// ---------------------- Main Function ----------------------
int32_t main() {
    fast_io;

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
