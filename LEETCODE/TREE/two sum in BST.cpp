// link-https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
// stirver link-https://www.youtube.com/watch?v=ssL3sHwPeb4


// approach
// first just do in order traversal the BST  and store it in vector
// we know in inorder traversal the vector will be sorted
// so our problem reduced to 2sum simple
// at last just apply simple two pointer return true if sum exist 

// time complexity=for traversing O(n)+twopointer O(n)=O(n)
// space complexity=O(n)

class Solution {
public:
    void trav(TreeNode* root,vector<int>& v){
        if(root==NULL)
            return;
        
        trav(root->left,v);
        v.push_back(root->val);
        trav(root->right,v);
        
        
    }
    
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        trav(root,v);
            int left=0;
        int right=v.size()-1;
        while(left<right){
            if((v[left]+v[right])==k)
                return true;
            else if((v[left]+v[right])>k)
                right--;
            else
                left++;
        }
        return false;
        
    }
};


