// 4. Median of Two Sorted Arrays
// Hard

// 19032

// 2188

// Add to List

// Share
// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

 

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
// problem link- https://leetcode.com/problems/median-of-two-sorted-arrays/
// time complexity is O(log (m+n))
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums1={1,2};
    vector<int> nums2={3,4};
    vector<int> nums3;
    for(auto it:nums1)
       nums3.push_back(it);
    for(auto it:nums2)
       nums3.push_back(it);
     sort(nums3.begin(),nums3.end());  
    for(auto it:nums3)
       cout<<it<<" "<<endl;;
    int n=nums3.size();
   if(n%2==0){
       double median=(double)(nums3[n/2]+nums3[(n/2)-1])/2;
      cout<<fixed<<setprecision(2)<<median;
   }
   else{
    double median=(double)nums3[n/2];
    cout<<fixed<<setprecision(2)<<median;

   }
    return 0;
}


