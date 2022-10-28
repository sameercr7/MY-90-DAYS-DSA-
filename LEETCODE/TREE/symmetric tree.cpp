// link-https://leetcode.com/problems/symmetric-tree/
// youtube link-https://www.youtube.com/watch?v=nKggNAiEpBE&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=26
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root==NULL || fun(root->left,root->right);
    }
    bool fun(TreeNode* left,TreeNode* right){
        if(left==NULL || right==NULL)
            return left==right;
        if(left->val!=right->val)
            return false;
        return fun(left->left,right->right) && fun(left->right,right->left);
    
    }
};