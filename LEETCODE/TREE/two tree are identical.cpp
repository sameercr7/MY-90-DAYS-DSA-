// link-https://leetcode.com/problems/same-tree/
// striver link-https://takeuforward.org/data-structure/check-if-two-trees-are-identical/
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
//         just the base condition
        if(p==-NULL && q==NULL)
            return true;
        else if(p==NULL || q==NULL)
            return false;
        return ((p->val == q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
        
    }
};

