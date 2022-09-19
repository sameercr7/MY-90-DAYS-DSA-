// TRAPPING RAINWATER PROBLEM
problem link-https://leetcode.com/problems/trapping-rain-water/


//time complexity is o(n^2)
//space complexity is o(1)

// i/p ={1,2,3} or {3,2,1} as if it is in Inc/Dec then it will never hold any water so o/p = 0 
// o/p      0          0
//  i/p ={3,0,1,2,5}
//  o/p =6
//naive approach
// for loop is starting with 1 and ending with n-1 bcoz we dont have to check these as they are last block
// we just take left max and right max for every i and take min of them an subtract it with block height
#include<bits/stdc++.h>
using namespace std;
int getwater(int arr[],int n){
    int res=0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[i];
        for(int j=0;j<i;j++)
        {
            lmax=max(lmax,arr[j]);
        }
        int rmax=arr[i];
        for(int j=i+1;j<n;j++)
        {
            rmax=max(rmax,arr[j]);
        }
        res=res+(min(lmax,rmax)-arr[i]);
    }
    return res;
}
int main(){
    int arr[]={3,0,1,2,5};
    int c=getwater(arr,5);
    cout<<c;
    return 0;
}
// EFFIECIENT APPROACH
//time complexity is o(n)
// i/p=5,0,6,2,3
// lmax={5,5,6,6,6}
// rmax={6,6,6,3,3}
#include<bits/stdc++.h>
using namespace std;
int getwater(int arr[],int n){
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        lmax=max(arr[i],arr[i-1]);
    }
    // its last element will be arrays last element

    int rmax[n-1]=arr[n-1];
    // here see the loop form where it is starting
    for(int i=n-2;i>=0;i--){
        rmax=max(arr[i],arr[i+1]);
         }
    for(int i=1;i<n-1;i++){
        int res=res+(min(lmax[i],rmax[i])-arr[i]);
    }
}


// best approach
// tim complexity=o(n)
// space complexity=O(1)
// approach simple sa h
// two pointer approach lgado simple sa h
// diagram mentioned h phle se hi

class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size(); 
        int left=0; int right=n-1;
        int res=0;
        int maxleft=0, maxright=0;
        
        while(left<=right){
            
            if(height[left]<=height[right]){

                if(height[left]>=maxleft) maxleft=height[left];
                else res+=maxleft-height[left];
                
                left++;
            }
            else{

                if(height[right]>=maxright) maxright= height[right];
                else res+=maxright-height[right];
                
                right--;
            }
        }
        return res;
    }
};