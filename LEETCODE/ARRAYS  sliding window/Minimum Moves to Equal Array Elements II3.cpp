//  Minimum Moves to Equal Array Elements II
// problem link - https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
// Medium

// 2709

// 104

// Add to List

// Share
// Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

// In one move, you can increment or decrement an element of the array by 1.

// Test cases are designed so that the answer will fit in a 32-bit integer.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: 2
// Explanation:
// Only two moves are needed (remember each move increments or decrements one element):
// [1,2,3]  =>  [2,2,3]  =>  [2,2,2]
// Example 2:

// Input: nums = [1,10,2,9]
// Output: 16


// 1st approach is median approach
// first sort the array then find the median an subtract element from median to get the minimum moves
// time comlexity is O(nlog(n))
// space complexity is o(1)
int minMoves2() {
       vector<int>nums={1,2,3};


        sort(nums.begin(),nums.end());
        int n=nums.size(),res=0;
        int median=n%2==0? (nums[n/2]+nums[(n/2)-1])/2 :nums[n/2];
        for(auto it:nums)
            res+=abs(it-median);
        return res;
}


// 2nd approach
// sort the array and just use two pointer concept
 int minMoves2() {
       vector<int>nums={1,2,3};

        sort(nums.begin(),nums.end());
       int res=0,start=0,end;
        end=nums.size()-1;
        while(start<end){
            res+=(nums[end]-nums[start]);
            start++;
            end--;
            
        }
        return res;
 }