// 31. Next Permutation
// Medium

// 13016

// 3784

// Add to List

// Share
// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

// For example, the next permutation of arr = [1,2,3] is [1,3,2].
// Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
// While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
// Given an array of integers nums, find the next permutation of nums.

// The replacement must be in place and use only constant extra memory.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:

// Input: nums = [3,2,1]
// Output: [1,2,3]
// Example 3:

// Input: nums = [1,1,5]
// Output: [1,5,1]


// time complexity=o(n)+o(n)+o(n)=O(3n)=o(n)
// space complexity=o(1)


// approach
// 1-first traverse the array from back side...and find the break point...break point refers to the point from where its left and
// righ side is in increasing order just like in dictionary

// 2-then find the next greater element than first break point element

// 3-just swap these element

// 4-lastly reverse the array from nums.begin+k+1 to arrays end

#include<bits/stdc++.h>


using namespace std;


int main(){
    vector<int> nums={1,3,5,4,2};
    // tm {1,2,3} ke permutation leke smjh skte ho simple
    // 1 2 3
    // 1 3 2
    // 2 1 3
    // 3 2 1
    int n=nums.size(),k,l;
    for( k=n-2;k>=0;k--){
        if(nums[k]<nums[k+1]){
            break;
        }
    }
        if(k<0)
          reverse(nums.begin(),nums.end());
        else{
            for( l=n-1;l>=0;l--){
                if(nums[k]<nums[l]){
                    break;
                }
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+k+1,nums.end());
            for(auto it:nums)
                cout<<it<<" ";
        }
    
    
	return 0;
}