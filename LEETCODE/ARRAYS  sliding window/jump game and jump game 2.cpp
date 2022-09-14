// jump game

// problem link-https://leetcode.com/problems/jump-game/

// You are initially positioned at the array's first index, 
// and each element in the array represents your maximum jump length at that position.
// Return true if you can reach the last index, or false otherwise.







// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.

 

// Example 1:

// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
// Example 2:

// Input: nums = [3,2,1,0,4]
// Output: false
// Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.


#include <bits/stdc++.h>
using namespace std;
 #define ll long long
int main()

 {vector<int> nums={3,2,1,0,4};
        int t,maxi=0;
        for(int i=0;i<nums.size();i++){
            
            if(maxi<i)
                cout<<"false";
            maxi=max(maxi,i+nums[i]);
        }
        cout<<"true";


    return 0;
}

// jump game -2
//  Jump Game II

// problem link-https://leetcode.com/problems/jump-game-ii/

// Medium

// 9531

// 335

// Add to List

// Share
// Given an array of non-negative integers nums, you are initially positioned at the first index of the array.

// Each element in the array represents your maximum jump length at that position.

// Your goal is to reach the last index in the minimum number of jumps.

// You can assume that you can always reach the last index.

 

// Example 1:

// Input: nums = [2,3,1,1,4]
// Output: 2
// Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
// Example 2:

// Input: nums = [2,3,0,1,4]
// Output: 2


#include <bits/stdc++.h>
using namespace std;
 #define ll long long
int main()

 {vector<int> nums={2,3,0,1,4};

              int maxi=0,jumps=0,current=0;
        for(int i=0;i<nums.size()-1;i++){
            maxi=max(maxi,i+nums[i]);
            if(i==current){
               current=maxi;
               jumps++;
            }
        }
        cout<<jumps;

    }









