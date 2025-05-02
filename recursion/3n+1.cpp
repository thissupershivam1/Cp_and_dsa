#include <iostream>
using namespace std;
typedef long long ll;


ll solve(ll n,ll cnt){

    if(n==1){
        return cnt;
    }

    if(n%2==0){
        return solve(n/2,cnt+1);
    }
    else{
        return solve(3*n+1,cnt+1);
    }

}
int main() {
    ll n;
   cin>>n;
   ll ans=solve(n,1);
   cout<<ans<<endl;
    return 0;
}