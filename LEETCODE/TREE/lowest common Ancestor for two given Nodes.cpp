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


// there is one approach also just calculaate the root to node path in vecotr array
// and then just compare them 1,2,3,4,5 [1,2,6,7,8] jhna pe different aajaye uske ek phle wale ko return krdo



1st Approach Using path arrays
Time Complexity = O(N), Space Complexity = O(H) where H is the height of the Binary Tree
In this solution we require three traversal of binary tree (0(N)+0(N)+0(N)) => 3(0(N)) => 0(N).

class Solution {
public:
    bool findPath(TreeNode* root, vector<TreeNode*> &path, TreeNode* node){
        if(root == NULL) return false;
        path.push_back(root);
        if(root == node) return true;
        if(findPath(root->left, path, node) || findPath(root->right, path, node)) return true;
        path.pop_back();
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1, path2;
        if(findPath(root, path1, p) == false || findPath(root, path2, q) == false) return NULL;
        int itr = 0;
        for(itr; itr < min(path1.size(), path2.size()); itr++){
            if(path1[itr] != path2[itr]) break;
        }
        return path1[itr-1];
    }
};