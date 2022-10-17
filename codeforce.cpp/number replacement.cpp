// link-https://codeforces.com/contest/1744/problem/A

#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v)
       cin>>i;
    string s;
    cin>>s;
    unordered_map<int,unordered_set<char>> mp;
    for(int i=0;i<n;i++){
      // it is just simply mapping 
      mp[v[i]].insert(s[i]);
    }
    for(auto it:mp){
      // one lement should have uniqueness anf if not then print no
      if(it.second.size()>1){
         cout<<"no"<<endl;
         return 0;
      }
    }
         cout<<"yes"<<endl;
    }
int main(){
  int t;
  cin>>t;
  while(t--){
  solve();
  }
}