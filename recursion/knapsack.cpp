#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


ll helper(vector<ll>&value,vector<ll>&weight,int idx,ll left,ll n ){
    if(idx==n){
        return 0;
    }
    if(left>=weight[idx]){
        return max(helper(value,weight,idx+1,left-weight[idx],n)+value[idx],helper(value,weight,idx+1,left,n));
    }
    else{
        return helper(value,weight,idx+1,left,n);
    }


}
int main() {
    ll n,w;
   cin>>n>>w;
   vector<ll>value(n,0),weight(n,0);

   for(int i=0;i<n;i++){
    cin>>weight[i]>>value[i];
   }

   cout<<helper(value,weight,0,w,n)<<endl;
   
    return 0;
}