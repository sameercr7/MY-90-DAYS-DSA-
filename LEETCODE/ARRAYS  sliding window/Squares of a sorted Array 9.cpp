// problem link-https://leetcode.com/problems/squares-of-a-sorted-array/submissions/
// 977. Squares of a Sorted Array
// Easy
// Add to List

// Share
// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]

// approach simple start from the back and paply two pointer approach
// time complexity is o(n)

vector<int> sortedSquares(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        vector<int> vec(nums.size(),0);
        
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[left])>nums[right])
            {
                
                vec[i]=nums[left]*nums[left];
                left++;
            }
            else{
                
                vec[i]=nums[right]*nums[right];
                right--;
            }
        }
        return vec;
}