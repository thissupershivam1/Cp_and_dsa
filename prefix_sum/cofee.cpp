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
    int n,k,q;
    cin>>n>>k>>q;

    vector<int>v(200002,0);
    while(n--){
        int a,b;
        cin>>a>>b;
        v[a]++;
        v[b+1]--;
    }
    for(int i=1;i<200002;i++){
       v[i]+=v[i-1];
    }

    vector<int>pre(200002,0);
    for(int i=1;i<200002;i++){
        pre[i]=pre[i-1];
        if(v[i]>=k){
            pre[i]+=1;
    }
}
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<pre[b]-pre[a-1]<<endl;
    }
}

// ---------------------- Main Function ----------------------
int32_t main() {
    fast_io;

        solve();
    return 0;
}
