// MAXIMUM SUBARRAY
// //time complexity is o(n^2)
//space complexity is o(1)
// naive approach
int maxSum(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int current=0;
        for(int j=i;j<n;j++)
        {
            current=current+arr[i];
            res=max(res,current);
        }
    }
    return res;
}
// best efficient approach kadans algo

// Maximum Subarray
// Medium

// 24160

// 1141

// Add to List

// Share
// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// A subarray is a contiguous part of an array.

 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0],res=0;
        
        for(auto i:nums){
            res+=i;
            maxi=max(res,maxi);
            if(res<0)
                res=0;
            
        }
        return maxi;
    }    
};