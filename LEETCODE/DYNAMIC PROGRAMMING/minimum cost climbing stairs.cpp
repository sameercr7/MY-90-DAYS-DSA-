// link-https://leetcode.com/problems/min-cost-climbing-stairs/
// youtube link-https://www.youtube.com/watch?v=kLCGmZGtImM


class Solution {
public:
    int fun(vector<int>& cost,int i,vector<int> &dp){
        if(i==(cost.size()-1) || i==(cost.size()-2))
            return cost[i];
        if(dp[i]!=-1)
            return dp[i];
//         now there are two choices of moves...either we move 1 step at a time...or move 2 step at a time
//         recusion for the case if me move 1 step ahead
        int p=fun(cost,i+1,dp);
//         recursiom for the case of we move 2 step ahead
        int q=fun(cost,i+2,dp);
            dp[i]=min(p,q)+cost[i];
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
//         if cost array length is 2 that means just take minimum of index -0 and index -1
        if(cost.size()==2)
            return min(cost[0],cost[1]);
        vector<int> dp(1001,-1);
//         there are two cases one moving from 0 to top
//         another one is moving from 1 to top
        int x=fun(cost,0,dp);
        int y=fun(cost,1,dp);
//         at last take minimum of(x,y) as in ques we have to print tha minimum cost 
        return min(x,y);
        
    }
};