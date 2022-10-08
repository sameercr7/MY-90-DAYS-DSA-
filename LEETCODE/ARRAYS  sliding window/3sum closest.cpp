// link-https://leetcode.com/problems/3sum-closest/
// youtube link-https://www.youtube.com/watch?v=anuarmFjTGU


// approach 
// why sort? ...bcoz we want to increase our sum value to the target sum so that difference can be more close to target sum
// just fix one variable
// and apply two pointer in other part of the array
// this is efficient approach 
// having time complexity=o(n^2)
// space complexity=o(1)

// approach -2
// refer to GFG article-https://www.geeksforgeeks.org/find-a-triplet-in-an-array-whose-sum-is-closest-to-a-given-number/
// you can try another approach also that is brute force
// but time complexity will be O(n^3) as three loop will be used 
// one for fixing other for traversing


#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum,mini=INT_MAX,ans;
        for(int i=0;i<nums.size();i++){
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                sum=nums[i]+nums[left]+nums[right];
                if(sum==target)
                    return sum;
                else if(abs(target-sum)<mini)
                {
                    mini=abs(target-sum);
                    ans=sum;
                }
                if(sum<target)
                    left++;
                else
                    right--;
            }
        }
        return ans;
    }
    int main(){
        vector<int> nums={-1,2,1,-4};
        int target=2;
       cout<<threeSumClosest(nums,target);
    }