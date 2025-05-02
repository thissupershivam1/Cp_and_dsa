#include <iostream>
using namespace std;
typedef long long ll;


void solve(ll n){

   if(n==0){
    return;
   }
   cout<<"I love Recursion"<<endl;
   solve(n-1);
}
int main() {
    ll n;
   cin>>n;
   solve(n);
    return 0;
}