
// 2461. Maximum Sum of Distinct Subarrays With Length K
// link-https://leetcode.com/contest/weekly-contest-318/problems/maximum-sum-of-distinct-subarrays-with-length-k/
// youtube link-https://www.youtube.com/watch?v=kfFwnYXWR3U

class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        int n=nums.size();
        long long sum=0,maxo=0;

        map<int,int> check;
        for(int i=0;i<k-1;i++){
            sum+=nums[i];
            check[nums[i]]++;
        }
        for(int i=k-1;i<n;i++){
            check[nums[i]]++;
            sum+=nums[i];
            if(check.size()==k){
                maxo=max(maxo,sum);
            }
            if(check[nums[i-k+1]]==1){
                check.erase(nums[i-k+1]);
            }
            else{
                check[nums[i-k+1]]--;
            }
            sum-=nums[i-k+1];
        }
        return maxo;
    }
};