// link-https://leetcode.com/problems/leaf-similar-trees/
// youtube link-https://www.youtube.com/watch?v=rlWJlXQNt0Q


// approach 
// simply traverse krlo kisi vector mein daaloo aur last mein check krlo ki equal h ya nahi
class Solution {
public:
    void inorder(TreeNode* root,vector<int>& v){
        if(root==NULL)
            return;
            
       if(root->left==NULL && root->right==NULL)
            v.push_back(root->val);
         inorder(root->left,v);
        inorder(root->right,v);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        inorder(root1,v1);
        inorder(root2,v2);
        
        
        return v1==v2;
    }
};