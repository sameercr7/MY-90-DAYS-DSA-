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

// Time Complexity: O( 2^n *(k log (x) ))
// Space Complexity:  O(2^n * k)


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


.................................................................

// approach optimized h ismein set ni lerhe h extra space ko avoid kr rhe h

// time complexity = O(2^n*n).......n is for uting subset in array...as everry subset is near about of n size
// space cpmplexity = O(2^n * k) to store every subset of average length k
// Auxiliary space is O(n)  if n is the depth of the recursion tree.


#include<bits/stdc++.h>
using namespace std;
   
      void subset(int ind,vector<int>& nums, vector<vector<int>>& ans,vector<int>& ds){
        // pushing the empty vector in ans vector
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            // major trick this is the case when we have to continue bcoz this contains dulicate set
            if(i!=ind && nums[i]==nums[i-1])
                continue;
            ds.push_back(nums[i]);
            // is line ko smkjhne keliye ek baar dry run krke dkhlo
            subset(i+1,nums,ans,ds);
            // make sure whatever you added at the end just pop that so the recursion can be performed smoothly
            ds.pop_back();
        }
        
        
    }
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        // most important thing is this to sort .....if you will not sort then this logic of recusrion will not workk=
        sort(nums.begin(),nums.end());
        subset(0,nums,ans,ds);
        return ans;
        
    }
    
   int main()
     {
        vector<int>  nums={1,2,2};
        vector<vector<int>> k=subsetsWithDup(nums);
        for(int i=0;i<k.size();i++){
            for(int j=0;j<k[i].size();j++){
                cout<<k[i][j]<<" ";

            }
            cout<<endl;


        }
    
    return 0;
     }

