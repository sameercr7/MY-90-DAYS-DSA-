problem  link-https://leetcode.com/problems/find-original-array-from-doubled-array/

// Find Original Array From Doubled Array
// Medium

// 1538

// 93

// Add to List

// Share
// An integer array original is transformed into a doubled array changed by appending twice the value of every element in original, and then randomly shuffling the resulting array.

// Given an array changed, return original if changed is a doubled array. If changed is not a doubled array, return an empty array. The elements in original may be returned in any order.

 

// Example 1:

// Input: changed = [1,3,4,2,6,8]
// Output: [1,3,4]
// Explanation: One possible original array could be [1,3,4]:
// - Twice the value of 1 is 1 * 2 = 2.
// - Twice the value of 3 is 3 * 2 = 6.
// - Twice the value of 4 is 4 * 2 = 8.
// Other original arrays could be [4,3,1] or [3,1,4].
// Example 2:

// Input: changed = [6,3,0,1]
// Output: []
// Explanation: changed is not a doubled array.
// Example 3:

// Input: changed = [1]
// Output: []
// Explanation: changed is not a doubled array.


// approach
// 1-if the array contains double the value
// 2-then we can remove that from array
// 3-we sorted the array first bcoz we want to delete the twice of the number and that  only it is  possible to remove
// take e.g [1,2]=o/p=1 and [2,1]=o/p=0 

// time complexity =o(nlogn)
// space complexity=o(n)




#include<bits/stdc++.h>
using namespace std;

int main() {
 vector<int> changed={1,3,4,2,6,8};
        map<int,int> mp;
        vector<int> v;
        if(changed.size()%2!=0)
           cout<<0<<endl;
     sort(changed.begin(),changed.end());
     for(auto it:changed){
         mp[it]++;
         }
      for(auto it:changed){
         if(mp[it]==0)
            continue;
         if(mp[2*it]==0)
            cout<<"0";
         mp[2*it]--;
         v.push_back(it);
         mp[it]--;
         
      }
         for(auto it:v)
            cout<<it<<" ";
         

return 0;
}