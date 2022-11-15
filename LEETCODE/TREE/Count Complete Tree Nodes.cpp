// link-https://leetcode.com/problems/count-complete-tree-nodes/
// youtube link-https://www.youtube.com/watch?v=u-yWemKGWO0

// Approach-1
// simple apply any inorder preorder postorder and just use one counter to count every node
// TC-O(n)
// SC-O(H)
// where h is a height of binary tree as it is complete tree so SC->o(log(n))
class Solution {
public:
    void cout(TreeNode* root,int &c){
        if(root==NULL)
            return;
        c++;
        cout(root->left,c);
        cout(root->right,c);
        
    }
    int countNodes(TreeNode* root) {
        int c=0;
        cout(root,c);
        return c;
    }
};

// Approach -2
// We will invent a formula from height of the tree samrtly
// first calculate leftheight and rightheight and then check both heights
// if both come equal that means directly apply formula (2*height-1) or (1<<height)
// if not equal then go to the next node and check their height ...you will do until you find both left and right tree becomes equal

// TC-o(log(n))^2 as we are not traversing whole tree
// SC-o(log(n)) as we used recursive space

class Solution {
public:
    int countNodes(TreeNode* root) {
           if(root==NULL)
            return 0;
         int lh=leftheight(root);
             int rh=rightheight(root);
        if(lh==rh)
            return (1<<lh)-1;
        else
            return 1+countNodes(root->left)+countNodes(root->right);        
       
    }
    int leftheight(TreeNode* node){
        int l=0;
        while(node){
            l++;
            node=node->left;
        }
        return l;
    }
    int rightheight(TreeNode* node){
        int r=0;
        while(node){
            r++;
            node=node->right;
        }
        return r;
        
    }
};