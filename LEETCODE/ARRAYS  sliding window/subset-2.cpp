// 90. Subsets II
// Medium
// Share
// Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 

// Example 1:

// Input: nums = [1,2,2]
// Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]



// APPROACH  ...recursion 
// 1-dkho phle sare combination nikalo ek baar mtlb saare susequence nikalo
// 2-usko set mein daalo ek(taaki duplicate apne aap remove ho jaye)
// 3-ab humko vector<vector return krna h toh set ko dubara vectors mein convert krloo

Time Complexity: O( 2^n *(k log (x) ))
Space Complexity:  O(2^n * k)


#include<bits/stdc++.h>
using namespace std;

void funci(int ind,vector<int> ds,vector<int>& nums,set<vector<int>>& res){
  
    if(ind==nums.size()){
        sort(ds.begin(),ds.end());
        res.insert(ds);
    //  ans.push_back(ds);
       return;
    } 
ds.push_back(nums[ind]);
funci(ind+1,ds,nums,res);
ds.pop_back();
funci(ind+1,ds,nums,res); 
}

vector<vector<int>> funci2(vector<int>& nums){
     vector<int> ds;
 vector<vector<int>> ans;
 set<vector<int>> res;
     funci(0,ds,nums,res);
     cout<<res.size()<<endl;
    //  set to list or set se nikalke vector of vector bna rhe h
    for(auto it:res){
       ans.push_back(it);
    }
    return ans;
}
int main() {
	vector<int> nums={4,1,0};
    int n=3;
    
    vector<vector<int>> h;
    h=funci2(nums);
    for(int i=0;i<h.size();i++)
     {
        for(int j=0;j<h[i].size();j++){
            cout<<h[i][j]<<" ";
        }
cout<<endl;

     }

	return 0;
}
