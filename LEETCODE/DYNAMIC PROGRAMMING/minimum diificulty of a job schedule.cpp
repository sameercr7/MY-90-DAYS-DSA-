// link-https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/
// youtube link-youtube.com/watch?v=mBZEFR3LSNs



class Solution {
public:
// as j and d are chnanging 
int dp[301][11];
    int solve(vector<int>& job,int n,int i,int d){
        if(d==1)
          return *max_element(job.begin()+i,job.end());
        int res=INT_MAX,curr=INT_MIN;
// condition for dp
if(dp[i][d]!=-1)
   return dp[i][d];

        // now why upto (n-d) suppose we have d=2 and array=[6,5,4,3,2,1] so max we can go upto index arr[5] coz.....we have to each day atleas 1task so [6,5,4,3,2] in 1 day ...in the next day ...[1]
        for(int j=i;j<=(n-d);j++){
            // it will calculate the maximum upto job[j];
            curr=max(curr,job[j]);
            res=min(res,curr+solve(job,n,j+1,d-1));
        }

// dp statements
dp[i][d]=res;
return dp[i][d];

        
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
      
      memset(dp,-1,sizeof(dp));
        int n=jobDifficulty.size();
        // if days are > lenght of jobdifficulty then return -1..as we have to do everyday work and if work will be < than days then can't work each day

        if(n<d)
          return -1;
        return solve(jobDifficulty,n,0,d);
    }
};


// now this above soln will show TLE in 
// [380,302,102,681,863,676,243,671,651,612,162,561,394,856,601,30,6,257,921,405,716,126,158,476,889,699,668,930,139,164,641,801,480,756,797,915,275,709,161,358,461,938,914,557,121,964,315]
// 10

// so use memorization technique that is DP
// for this just seee what is changing and just note the constraints
