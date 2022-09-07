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

time complexity  O(2^n * n)
space complexity  2^n



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
