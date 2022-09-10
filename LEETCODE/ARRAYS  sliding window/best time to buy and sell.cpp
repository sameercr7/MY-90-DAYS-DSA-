
// 121. Best Time to Buy and Sell Stock
// Easy

// 19819

// 634

// Add to List

// Share
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.



























// first approach but result in TLE
// time complexity=O(n^2)
// space complexity=O(1)

 int maxProfit(vector<int>& prices) {
        int maxi=0;
            for(int j=1;j<=prices.size();j++){
                if(prices[j]>prices[j-1])
                    maxi+=(prices[j]-prices[j-1]);
        }
        return maxi;


// 2nd approach
// time complexity=O(n)
// space complexity=O(n)
// we have taken an auxiallary array to have the all the maximum prediction of profits
//   like this  7 6 6 6 6 4

#include<bits/stdc++.h> 
using namespace std; 
int main(){
	vector<int> nums={7,1,5,3,6,4};
	int n=nums.size();
	vector<int> v;
	int maxi=INT_MIN;
	int y=nums[n-1];
   for(int i=nums.size()-1;i>=0;i--){
	    y=max(nums[i],y);
		v.push_back(y);
   }
   reverse(v.begin(),v.end());
	for(auto it:v)
	  cout<<it<<" ";
	cout<<endl;
	for(int i=0;i<nums.size();i++)
	{
		maxi=max(v[i]-nums[i],maxi);
	}
	cout<<maxi;
	return 0;
 }
 
 
//  3rd approach
 // time complexity=O(n)
// space complexity=O(1)
//  idea- we just calculated minimum so far an subtract it form the comin elements in array
// and last we maximize that

 #include<bits/stdc++.h> 
using namespace std; 
int main(){
	vector<int> nums={7,1,5,3,6,4};
	int n=nums.size(),profit=0,curr_profit;
	int minimum_so_far=nums[0];
  for(int i=0;i<n;i++){
	minimum_so_far=min(minimum_so_far,nums[i]);
	curr_profit=nums[i]-minimum_so_far;
    profit=max(curr_profit,profit);
  }
  cout<<profit;


	return 0;
}