// 78. Subsets
// Medium

// 11892

// 171

// Add to List

// Share
// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]

// bit manipulation (power set)


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sub(vector<int>& nums){
     vector<vector<int>> v;
    int n=nums.size();
        for(int num=0;num<(1<<n);num++){
            vector<int> t;
            for(int i=0;i<n;i++){
                if(num &(1<<i))
                    t.push_back(nums[i]);
            }
           v.push_back(t);
        }
        return v;
      



}
int main() {
	vector<int> nums={1,2,3};
    vector<vector<int>> subo;
    subo=sub(nums);
    cout<<subo.size()<<endl;
    for(int i=0;i<subo.size();i++){
        for(int j=0;j<subo[i].size();j++)
        {
            cout<<subo[i][j]<<" ";
        }
        cout<<endl;

    }

	return 0;
}


// recursve solution
// vedio link = https://www.youtube.com/watch?v=AxNNVECce8c&t=222s

time complexity 2^n*n
space complexity O(n) depth 2^n is n 

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
        for(int j=0;j<h[i].size();j++){
            cout<<h[i][j]<<" ";
        }
cout<<endl;
     }
    
	return 0;
}
