#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<string>ans;
void solve(int idx,string s,vector<char>&temp,string curr){
     if(idx==s.size()){
        ans.push_back(curr);
        return;
     }

     for(int i=0;i<26;i++){
        if(temp[i]>0){
            temp[i]--;
            solve(idx+1,s,temp,curr+static_cast<char>('a'+i));
            temp[i]++;
        }
     }
}
int main() {
   string s;
   cin>>s;
   int n=s.size();
   vector<char>temp(26,0);
   for(int i=0;i<n;i++){
    temp[s[i]-'a']++;
   }
   string curr="";
   solve(0,s,temp,curr);
   cout<<ans.size()<<endl;
   for(auto it :ans){
    cout<<it<<endl;
   }
   return 0;
}