// 2379. Minimum Recolors to Get K Consecutive Black Blocks



// You are given a 0-indexed string blocks of length n, where blocks[i] is either 'W' or 'B', representing the color of the ith block. The characters 'W' and 'B' denote the colors white and black, respectively.

// You are also given an integer k, which is the desired number of consecutive black blocks.

// In one operation, you can recolor a white block such that it becomes a black block.

// Return the minimum number of operations needed such that there is at least one occurrence of k consecutive black blocks.

 

// Example 1:

// Input: blocks = "WBBWWBBWBW", k = 7
// Output: 3
// Explanation:
// One way to achieve 7 consecutive black blocks is to recolor the 0th, 3rd, and 4th blocks
// so that blocks = "BBBBBBBWBW". 
// It can be shown that there is no way to achieve 7 consecutive black blocks in less than 3 operations.
// Therefore, we return 3.
// Example 2:

// Input: blocks = "WBWBBBW", k = 2
// Output: 0
// Explanation:
// No changes need to be made, since 2 consecutive black blocks already exist.
// Therefore, we return 0.
// ...
// problem link=https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/
// ...

// time complexity O(n^2)
// space complexity O(1)

// approach simple use sliding window then check for minimum white that are to be turned as black

 #include<bits/stdc++.h>
using namespace std;
int main(){
   string blocks="WBWBBBW";
    int k=2,maxi=INT_MAX,count;
   for( int i =0; i+k-1<blocks.size()-k; i++)
        {
            int count =0;
            for( int j =0; j<k; j++) // k
            {
                if(blocks[i+j]=='W')
                count++;
            }
            maxi = min(maxi,count);
        }
    
    cout<<maxi;
return 0;
}