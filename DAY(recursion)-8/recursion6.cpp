





#include<bits/stdc++.h>
using namespace std;

 vector < vector < int >> solve(vector<vector<int>> &ans,vector<int> &nums,vector<int> &ds,int freq[]){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            solve(ans,nums,ds,freq);
            freq[i]=0;
            ds.pop_back();
        }

    }
    return ans;
}
int main(){
    int n,m;
    cin>>n;
   vector<int> nums;
   vector<vector<int>> ans;
   vector<vector<int>> sumation;

   vector<int> ds;
   int freq[n]={0};
   for(int i=0;i<n;i++){
       cin>>m;
       nums.push_back(m);
   }
   sumation=solve(ans,nums,ds,freq);
   for (int i = 0; i < sumation.size(); i++) {
    for (int j = 0; j < sumation[i].size(); j++)
      cout << sumation[i][j] << " ";
    cout << endl;
  }
  return 0;
}