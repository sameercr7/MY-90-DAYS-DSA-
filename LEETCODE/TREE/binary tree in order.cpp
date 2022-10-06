// link- https://leetcode.com/problems/binary-tree-inorder-traversal/
// striver link-https://www.youtube.com/watch?v=Z_NEgBgbRVI&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=7




class Solution {
public:
    void inovate(TreeNode* root,vector<int>& vec){
        if(root==NULL)
            return;
        inovate(root->left,vec);
            vec.push_back(root->val);
        inovate(root->right,vec);
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> vec;
        inovate(root,vec);
        return vec;
        
    }
};