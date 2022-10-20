// link-https://leetcode.com/problems/climbing-stairs/
// link-https://takeuforward.org/data-structure/dynamic-programming-climbing-stairs/


// climbing stairs
// use tabulation method to ssolve this problem you can solve any method 
// like simple dp ,tabulation method,sapce optimization just like we did in fibonacci

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};