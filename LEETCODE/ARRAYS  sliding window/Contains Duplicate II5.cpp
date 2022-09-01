// 219. Contains Duplicate II
// Easy

// 3016

// 2071

// Add to List

// Share
// Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

 

// Example 1:

// Input: nums = [1,2,3,1], k = 3
// Output: true
// Example 2:

// Input: nums = [1,0,1,1], k = 1
// Output: true
// Example 3:

// Input: nums = [1,2,3,1,2,3], k = 2
// Output: false
bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> mappy;
    for(int i=0;i<nums.size();i++)
      {
        if(mappy.count(nums[i]))
          {
            if(abs(i-mappy[nums[i]])<=k)
               return true;
          }
          mappy[nums[i]]=i;
      }
        return false;
    }