#include <iostream>
using namespace std;
typedef long long ll;


void solve(ll n){

   if(n==0){
    return;
   }
   solve(n-1);
   cout<<n<<endl;
}
int main() {
    ll n;
   cin>>n;
   solve(n);
    return 0;
}