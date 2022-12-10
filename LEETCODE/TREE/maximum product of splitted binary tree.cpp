// link-https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/
// youtube link-https://www.youtube.com/watch?v=4UMTV670ZWM

// approach yhi h ki  If we know the sum of a subtree, the answer is max( (total_sum - subtree_sum) * subtree_sum) in each node.

class Solution {
public:
// ye declatration h globally kynki ise baar baar use krn padta h na isiliye
    long long totalsum=0,toto=0;
    int fun(TreeNode* root){
        int sum=0;
        if(root==NULL)
            return 0;
        int sumation=fun(root->left)+fun(root->right)+root->val;
        toto=max(toto,(totalsum-sumation)*sumation);
        return sumation;
        
    }
    int maxProduct(TreeNode* root) {
//         forst we will calculate total sum
        long long int mod=1e9+7;
        // first total sum jaan lo then bus simply ise use krlo
        totalsum =fun(root);
        fun(root);
        return toto%mod;
    }
};