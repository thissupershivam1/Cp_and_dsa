#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


bool solve(ll n,vector<ll>&temp,ll i,ll j){
   
    if(i>=j){
        return true;
    }
    if(temp[i]==temp[j]){
        return solve(n,temp,i+1,j-1);
    }
    else{
        return false;
    }
    
}
int main() {
    ll n;
   cin>>n;
   vector<ll>temp(n,0);
   for(auto &it:temp){
    cin>>it;
   }
   bool ans=solve(n,temp,0,n-1);
   if(ans){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    return 0;
}