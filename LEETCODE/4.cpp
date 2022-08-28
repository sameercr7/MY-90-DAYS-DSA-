// 643. Maximum Average Subarray I
// problem link - https://leetcode.com/problems/maximum-average-subarray-i/
// Easy

// 1835

// 170

// Add to List

// Share
// You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

// Example 1:

// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000
// Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
// Example 2:

// Input: nums = [5], k = 1
// Output: 5.00000

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,12,-5,-6,50,4};
    int k=4,maxi=INT_MIN;
    int curr_sum=0;
    for(int i=0;i<k;i++)
         curr_sum+=arr[i];
    double max_sum=double(curr_sum)/k;
    // this will start from end of first loop that is from k 
    for(int j=k;j<arr.size();j++){
            curr_sum+=arr[j]-arr[j-k];
            double nummy=(double)curr_sum/k;
            max_sum=max(max_sum,nummy);

        }
        
        cout<<max_sum;
         return 0;
        }



        // another solution just little bit changes
         double curr_sum=0;
    for(int i=0;i<k;i++)
         curr_sum+=nums[i];
    double max_sum=curr_sum;
    for(int j=k;j<nums.size();j++){
            curr_sum+=nums[j]-nums[j-k];
            max_sum=max(max_sum,curr_sum);

        }
        return max_sum/k;
        
