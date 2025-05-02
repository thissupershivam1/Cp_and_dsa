#include <iostream>
using namespace std;
typedef long long ll;


ll solve(ll n){

    if(n==1||n==0){
        return 1;
    }

    return n*solve(n-1);
}
int main() {
    ll n;
   cin>>n;
   ll ans=solve(n);
   cout<<ans<<endl;
    return 0;
}