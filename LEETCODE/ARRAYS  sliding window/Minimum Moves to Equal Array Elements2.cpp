//  Minimum Moves to Equal Array Elements
// problem link-https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
// Medium

// 1811

// 1721

// Add to List

// Share
// Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

// In one move, you can increment n - 1 elements of the array by 1.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: 3
// Explanation: Only three moves are needed (remember each move increments two elements):
// [1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
// Example 2:

// Input: nums = [1,1,1]
// Output: 0


// Now, this is intuitive that since our operation is to decrease exactly one element in the array by 1, we need to convert all the elements in the array to the minimum element present in the array(As it doesn’t need to be decreased any further).
int main(){
    vector<int> nums={1,2,3};
    int n=3;
            int m=INT_MAX;
			for(int n:nums) m = min(m,n);
			int ans=0;
			for(int n:nums) ans+=n-m;
			   cout<<ans;
}





