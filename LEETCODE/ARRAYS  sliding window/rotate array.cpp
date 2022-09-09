// 189. Rotate Array
// Medium

// 11138

// 1397

// Add to List

// Share
// Given an array, rotate the array to the right by k steps, where k is non-negative.

 

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation: 
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]

problem link-https://leetcode.com/problems/rotate-array/

sheet problem link-https://takeuforward.org/data-structure/rotate-array-by-k-elements/


For Rotating Elements to right
Step 1: Reverse the last k elements of the array

Step 2: Reverse the first n-k elements of the array.

Step 3: Reverse the whole array.

For Eg , arr[]={1,2,3,4,5,6,7} , k=2

// Reverse first n-k elements
  Reverse(arr, 0, n - k - 1);
  // Reverse last k elements
  Reverse(arr, n - k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);






For Rotating Elements to left
Step 1: Reverse the first k elements of the array

Step 2: Reverse the last n-k elements of the array.

Step 3: Reverse the whole array.

// Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);



Time Complexity – O(N) where N is the number of elements in an array

Space Complexity – O(1) since no extra space is required



#include <bits/stdc++.h>
using namespace std;
void rev(vector<int> &nums,int start,int end){
       
      while(start<=end){
    int temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp;
            start++;
            end--;
        }
    }
void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
      //  In case the rotating factor is
    // greater than array length
        k=k%n;
        rev(nums,0,n-k-1);
        rev(nums,n-k,n-1);
        rev(nums,0,n-1);

        for(auto it:nums)
           cout<<it<<" ";
          }

int main(){
            vector<int>  nums={1,2,3,4,5,6,7};

int k=3;
rotate(nums,k);
return 0;
          }
















