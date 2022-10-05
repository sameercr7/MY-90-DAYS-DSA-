// link-https://leetcode.com/problems/path-sum-iii/submissions/

// path sum 3

// approach
// 1-use hshing technique to solve the problem
// 2-mp[sum]-- means it is clearing that key value in the same path so that during traversal of other binary tree it doesn;t interrupt
// 3-two count++ is udes bcoz it may be possible that   sum+=root->val; this also eqial to targetsum  or 
// if(mp.find(sum-targetSum)!=mp.end()) could equal to targetsum


class Solution {
public:
    unordered_map<long,int> mp;
    int count=0;
    void fun(TreeNode* root,int targetSum,long sum){
        if(root==NULL)
            return;
        sum+=root->val;
        if(sum==targetSum)
            count++;
        if(mp.find(sum-targetSum)!=mp.end())
            count += mp[sum - targetSum];
        mp[sum]++;
        fun(root->left,targetSum,sum);
        fun(root->right,targetSum,sum);
        mp[sum]--;
        
    }
    
    
    
    
    int pathSum(TreeNode* root, int targetSum) {
        fun(root,targetSum,0);
        return count;
        
    }
};