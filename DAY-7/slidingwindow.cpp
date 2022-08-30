// SLIDING WINDOW TECHNIQUE
// naive approach
// i+k-1 just do it on copy you will understand the pattern
// time complexity O(n-k)*k
// space complexity O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1, 8, 30, -5, 20, 7};
    int k,maxi=INT_MIN;
    cin>>k;

    for(int i=0;i+k-1<arr.size();i++){
        int sum=0;
        // this loop wil end on k
        for(int j=0;j<k;j++){
            sum+=arr[i+j];

        }
        maxi=max(maxi,sum);

    }
    cout<<maxi;
    return 0;
}

// efficient approach
// if your array contain negative and postive then only this approach will work otherwise not work
// in this approach you firt get the sum of k elements then just add the last element and suybtract the before loop starting value

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1, 8, 30, -5, 20, 7};
    int k,maxi=INT_MIN;
    cin>>k;
    int curr_sum=0;
    for(int i=0;i<k;i++)
         curr_sum+=arr[i];
    int max_sum=curr_sum;
    // this will start from end of first loop that is from k 
    for(int j=k;j<arr.size();j++){
            curr_sum+=arr[j]-arr[j-k];
            max_sum=max(max_sum,curr_sum);

        }
        cout<<max_sum;
         return 0;
        }

// problem link - https://leetcode.com/problems/sliding-window-maximum/
// You are given an array of integers nums, there is a sliding window of size k which is 
// moving from the very left of the array to the very right. 
// You can only see the k numbers in the window. Each time the sliding window moves right by one position.

// Return the max sliding window.
// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7
// Example 2:

// Input: nums = [1], k = 1
// Output: [1]
// time complexity -O(n)
// space complexity is O(k)
// approach
// we will use deque first traverse through the whole array and if dq is not empty then we will perform some operation
// firs if is for out of bound if it is then pop from the front
// second while , as we are arranging th elements is descending order so we will check from the behind that
// it is lesser than current element of array it it is so then we will remove that  from back
// At last if condition is simple just when we complete for given k then we just push backk the front eleemnt of deque


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1, 3,-1,-3,5,3,6,7};
    int k=3;
    deque<int> dq;
    vector<int> new_arr;
    for(int i=0;i<nums.size();i++){
        if(!dq.empty() && dq.front()==i-k)
            dq.pop_front();
        while(!dq.empty() && nums[dq.back()]<nums[i])
            dq.pop_back();
        dq.push_back(i);
        if(i>=k-1)
           new_arr.push_back(nums[dq.front()]);
               
    }
    for(auto it:new_arr)
       cout<<it<<" ";
    return 0;
}
    