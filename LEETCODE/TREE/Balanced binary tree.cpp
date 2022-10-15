// link-https://leetcode.com/problems/balanced-binary-tree/
// youtube link-https://www.youtube.com/watch?v=Yt50Jfbd8Po&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=16
// https://takeuforward.org/data-structure/check-if-the-binary-tree-is-balanced-binary-tree/

// balanced binary tree-DEFINATION its a tree in which "(leftheight of the node-right heiht of the node<=1)"

// approach
// just modify the height of the tree
// we are doing this in o(n)

// just simply traverse the tree

// time complexity =o(n)
// space complexity=O(1)


class Solution {
public:
    int dfsheight(TreeNode *root){
    if(root==NULL)
        return 0;
    int lh=dfsheight(root->left);
        if(lh==-1)
            return -1;
    int rh=dfsheight(root->right);
        if(rh==-1)
            return -1;
    // checking for the condition abs(lh-rh)>1
    if(abs(lh-rh)>1)
        return -1;
    return 1+max(lh,rh);
        
        }
    bool isBalanced(TreeNode* root) {
        // here we just check whether it is -1 or not...if -1 then it means tree is not balanced
        // and if '1' comes then it means it is balanced tree 
        return dfsheight(root)!=-1;
        
    }
};