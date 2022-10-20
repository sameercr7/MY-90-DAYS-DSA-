// link-https://leetcode.com/problems/binary-tree-maximum-path-sum/
// link-https://takeuforward.org/data-structure/maximum-sum-path-in-binary-tree/


class Solution {
public:
int fun(TreeNode *root,int & maxi){
    if(root==NULL)
      return 0;

    //   why max(0,root->left,maxi) bcoz if max is negative then taking negative value will be of no use 

    int lh=max(0,fun(root->left,maxi));
    int rh=max(0,fun(root->right,maxi));
    int data=root->data;
    maxi=max(maxi,(lh+rh)+data);
    // last line this just tells what path we have to take
    return max(lh,rh)+data;
}
    
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MINI;
        fun(root,maxi);
        return maxi; 
        
    }
};