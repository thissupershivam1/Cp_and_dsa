#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


bool solve(ll n,vector<ll>&temp,ll value,ll k,ll idx){
   if(idx==n){
    return value==k;
   }

   ll plus= solve(n,temp,value+temp[idx],k,idx+1);
   ll minus=solve(n,temp,value-temp[idx],k,idx+1);

   return plus||minus;
  
   
    
}
int main() {
    ll n,k;
   cin>>n>>k;
   vector<ll>temp(n,0);
   for(auto &it:temp){
    cin>>it;
   }
   if(solve(n,temp,temp[0],k,1)){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   
   
    return 0;
}