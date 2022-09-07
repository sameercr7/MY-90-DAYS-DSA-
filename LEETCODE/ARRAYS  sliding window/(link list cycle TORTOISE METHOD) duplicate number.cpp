// 287. Find the Duplicate Number
// Medium



// Share
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
 

//  problem link - https://leetcode.com/problems/find-the-duplicate-number/

// optimal approach using hash jo maine phle try mein kiya tha

// time complexity =O(n)
// space complexity =O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,3,4,2,2};
    unordered_map<int,int> mp;
         for(auto it:nums)
             mp[it]++;
         for(auto it:mp){
            if(it.second>=2)
             cout<<it.first;
             break;
         }
return 0;


}

// best approach using link list cycle method
// also known as tortoise method
// two pointers we take slow and fast 
// slow moves 1 and fas moeves 2 and..ehnever the collide then we restrict the moves of fast as one
// and now jo bi collison pe milega wp duplicate hi hoga

// time complexity =O(n)
// space complexity =O(1)


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,3,4,2,2};
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        cout<<slow;

    return 0;
}
