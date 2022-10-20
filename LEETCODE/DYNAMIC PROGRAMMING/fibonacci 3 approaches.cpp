

// link-https://leetcode.com/problems/fibonacci-number/
// link-https://takeuforward.org/data-structure/dynamic-programming-introduction/
class Solution {
public:
    int fib(int n) {
        
        if(n<=1)
            return n;
            
        
        return fib(n-1)+fib(n-2);
           
        
        
    }
};

// using memoize
// Create a dp[n+1] array initialized to -1.
// Whenever we want to find the answer of a particular value (say n), we first check whether the answer is already calculated using the dp array(i.e dp[n]!= -1 ). If yes, simply return the value from the dp array.
// If not, then we are finding the answer for the given value for the first time, we will use the recursive relation as usual but before returning from the function, we will set dp[n] to the solution we get.

// Time Complexity: O(N)

// Reason: The overlapping subproblems will return the answer in constant time O(1). Therefore the total number of new subproblems we solve is ‘n’. Hence total time complexity is O(N).

// Space Complexity: O(N)

// Reason: We are using a recursion stack space(O(N)) and an array (again O(N)). Therefore total space complexity will be O(N) + O(N) ≈ O(N)

#include <bits/stdc++.h>

using namespace std;

int f(int n, vector<int>& dp){
    if(n<=1) return n;
    
    if(dp[n]!= -1) return dp[n];
    return dp[n]= f(n-1,dp) + f(n-2,dp);
}


int main() {

  int n=5;
//   declaration of memtization
  vector<int> dp(n+1,-1);
  cout<<f(n,dp);
  return 0;
}

// best optimization method
// Time Complexity: O(N)

// Reason: We are running a simple iterative loop

// Space Complexity: O(1)

// Reason: We are not using any extra space

#include <bits/stdc++.h>

using namespace std;


int main() {

  int n=5;
  
  int prev2 = 0;
  int prev = 1;
  
  for(int i=2; i<=n; i++){
      int cur_i = prev2+ prev;
      prev2 = prev;
      prev= cur_i;
  }
  cout<<prev;
  return 0;
}
