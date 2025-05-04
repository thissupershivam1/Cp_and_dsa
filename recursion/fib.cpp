#include <iostream>
using namespace std;
typedef long long ll;


ll solve(ll n){

  if(n==1|n==2){
    return n-1;
  }

  return solve(n-1)+solve(n-2);
  
}
int main() {
    ll n;
   cin>>n;
   ll ans= solve(n);
   cout<<ans<<endl;
    return 0;
}