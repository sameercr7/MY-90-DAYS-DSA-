#include<bits/stdc++.h>
using namespace std;

void funci(int ind,vector<int>& ds,vector<int>& nums,vector<vector<int>>& ans){
  
    if(ind>=nums.size()){
       ans.push_back(ds);
       return;
    }
ds.push_back(nums[ind]);
funci(ind+1,ds,nums,ans);
ds.pop_back();
funci(ind+1,ds,nums,ans); 
}

vector<vector<int>> funci2(vector<int>& nums){
     vector<int> ds;
 vector<vector<int>> ans;
     funci(0,ds,nums,ans);
    return ans;
}
int main() {
	vector<int> nums={1,2,3};
    int n=3;
    
    vector<vector<int>> h;
    h=funci2(nums);
    for(int i=0;i<h.size();i++)
     {
        for(int j=0;j<h[i].size();i++)
            cout<<h[i][j]<<" ";
     }
    cout<<endl;
	return 0;
}
