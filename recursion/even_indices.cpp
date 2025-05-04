#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


void solve(ll n,vector<ll>&temp,ll j){

    if(j<0){
        return;
    }
    if(j%2==0){
        cout<<temp[j]<<" ";
    }
    return solve(n,temp,j-1);  
}
int main() {
    ll n;
   cin>>n;
   vector<ll>temp(n,0);
   for(auto &it:temp){
    cin>>it;
   }
   solve(n,temp,n-1);
   
    return 0;
}