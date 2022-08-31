// Sort Array by Increasing Frequency

// Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

// Return the sorted array.

 

// Example 1:

// Input: nums = [1,1,2,2,2,3]
// Output: [3,1,1,2,2,2]
// Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.
// Example 2:

// Input: nums = [2,3,1,3,2]
// Output: [1,3,3,2,2]
// Explanation: '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.
// Example 3:

// Input: nums = [-1,1,-6,4,5,-6,1,4,1]
// Output: [5,-1,4,4,-6,-6,1,1,1]


.......best question........
// mapping ,comparator,array
time -nlog(n)+o(n)+O(1)
space rhegi -O(n)


#include<bits/stdc++.h>
using namespace std;
   bool cmp(pair<int,int> el1, pair<int,int> el2){
            if(el1.first==el2.first){
                if(el1.second>el2.second)
                   return true;
            }
            if(el1.first<el2.first){
                   return true;
            }
            return false;
            
            
        }
int main(){
    vector<int> nums={1,1,2,2,2,3};
        unordered_map<int,int> v;
        vector<pair<int,int>> pa;
        for(auto it:nums)
             v[it]++;
        for(auto it:v)
            pa.push_back({it.second,it.first});
        sort(pa.begin(),pa.end(),cmp);
        vector<int> pussy;
        for(auto it:pa){
            while(it.first--){
                pussy.push_back(it.second);
            }
    }
        for(auto it:pussy)
              cout<<it<<" ";
 return 0;        
}     
   