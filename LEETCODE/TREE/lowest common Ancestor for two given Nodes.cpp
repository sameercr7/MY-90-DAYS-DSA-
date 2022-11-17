// link-https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
// youtube link-https://www.youtube.com/watch?v=_-QHfMDde90&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=30
// striver link-https://takeuforward.org/data-structure/lowest-common-ancestor-for-two-given-nodes/ 


// TC=o(N)
// SC=O(N)

class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || p==root || q==root)
            return root;
//         now do the traversal
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
//         if left is null then return right
        if(left==NULL)
            return right;
        else if(right==NULL)
            return left;
//         if both left and right are null then return root itself
        else
            return root;
            
        
    }
};