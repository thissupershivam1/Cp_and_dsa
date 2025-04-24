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
    int n,q;
    cin>>n>>q;
    vector<string> forest(n);
    for (int i = 0; i < n; ++i) {
        cin >> forest[i];
    }

    vector<vector<int> > pre(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            pre[i][j]=(forest[i][j]=='*')?1:0;
            if(j>0){
                pre[i][j]+=pre[i][j-1];
            }
            if(i>0){
                pre[i][j]+=pre[i-1][j];
            }
            if(i>0 && j>0){
                pre[i][j]-=pre[i-1][j-1];
            }
            // pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1]+v[i][j];
        }
    }//n^2

    while(q--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        l1--;
        r1--;
        l2--;
        r2--;
        int ans=pre[l2][r2];
        if(l1>0){
            ans-=pre[l1-1][r2];
        }
        if(r1>0){
            ans-=pre[l2][r1-1];
        }
        if(l1>0 && r1>0){
            ans+=pre[l1-1][r1-1];
        }
        cout<<ans<<endl;
        // ans=pre[l2][r2]-pre[l1-1][r2]-pre[l2][r1-1]+pre[l1-1][r1-1];
    }//q


}

// ---------------------- Main Function ----------------------
int32_t main() {
    fast_io;

        solve();
    return 0;
}
