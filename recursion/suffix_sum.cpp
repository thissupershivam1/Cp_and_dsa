#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


ll solve(ll n,vector<ll>&temp,ll j,ll k){

    if(k==0){
        return 0;
    }
   

    return temp[j]+solve(n,temp,j-1,k-1);
   
    
}
int main() {
    ll n,k;
   cin>>n>>k;
   vector<ll>temp(n,0);
   for(auto &it:temp){
    cin>>it;
   }
   ll ans=solve(n,temp,n-1,k);
   cout<<ans<<endl;
   
    return 0;
}