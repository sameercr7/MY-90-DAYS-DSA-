// link-https://leetcode.com/problems/binary-tree-right-side-view/
// striver link-https://takeuforward.org/data-structure/right-left-view-of-binary-tree/
// striver youtube link-https://www.youtube.com/watch?v=KV4mRzTjlAk&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=25


// TC=O(n)
// SC=O(H) in worst Case=O(n)

// simply use recursive traversal as it take SC=O(H) in worst case it will take o(n) but generally question takes SC=O(H)
// TC=o(n)
// why we haven't use iterative level order if we use that then we have to traverse every node and in that case our SC becomes very high
// So we will use Reverse preorder Traversal  Technique Root Right Left
// And for the printing left view just Use Root Left right
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        int level=0;
        mannu(root,level,res);
        return res;
    }
    void mannu(TreeNode* node,int level,vector<int>& res){
//         why level just draw recursive tree you will understand
        if(node==NULL)
            return;
        if(level==res.size())
            res.push_back(node->val);
            
        mannu(node->right,level+1,res);
        mannu(node->left,level+1,res);
    }
};