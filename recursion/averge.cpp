#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
typedef long long ll;


ll solve(ll n,vector<ll>&temp,ll j){

    if(j==0){
        return temp[0];
    }
   

    return temp[j]+solve(n,temp,j-1);
   
    
}
int main() {
    ll n;
   cin>>n;
   vector<ll>temp(n,0);
   for(auto &it:temp){
    cin>>it;
   }
   ll ans=solve(n,temp,n-1);
   
   double avg = static_cast<double>(ans) / n;

    cout << fixed << setprecision(6) << avg << endl;
 
   
    return 0;
}