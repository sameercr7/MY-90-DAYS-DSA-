// link-https://leetcode.com/problems/maximum-depth-of-binary-tree/
// youtube link-https://www.youtube.com/watch?v=eD3tmO66aBA&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=15


// approach
// just simply traverse the tree

// time complexity =o(n)
// space complexity=O(n)


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int lh=maxDepth(root->left);
            int rh=maxDepth(root->right);
        return 1+max(lh,rh);
        
    }
};