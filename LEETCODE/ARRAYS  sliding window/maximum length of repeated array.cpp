// maximum length of repeated array
// Given two integer arrays nums1 and nums2, return the maximum length of a subarray that appears in both arrays.

 

// Example 1:

// Input: nums1 = [1,2,3,2,1], nums2 = [3,2,1,4,7]
// Output: 3
// Explanation: The repeated subarray with maximum length is [3,2,1].
// Example 2:

// Input: nums1 = [0,0,0,0,0], nums2 = [0,0,0,0,0]
// Output: 5



// sliding window approach
problem link-https://leetcode.com/problems/maximum-length-of-repeated-subarray/
time complexity  =o(mn)
space complexity =o(1)



#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> nums1={1,2,3,2,1};
  vector<int> nums2={3,2,1,4,7};
  int m=nums1.size();
  int n=nums2.size();
  int maxi=0,count;
  for(int i=1-n;i<m;i++){
   count=0;
   for(int j=0;j<n;j++){
      if(i+j<0)
        continue;
      //   >=m lgaya h >=n(dry run krlo SS attach krderhe h dkhlena)
      else if(i+j>=m)
        break;
      else if(nums1[i+j]==nums2[j])
         {
            count++;
            maxi=max(maxi,count);
         }
         else 
           count=0;
   }

  }
  cout<<maxi;

        
   
   return 0;
  
  }
     

        
      


       

