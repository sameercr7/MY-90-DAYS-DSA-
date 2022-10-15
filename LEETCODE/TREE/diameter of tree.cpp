// link-https://leetcode.com/problems/diameter-of-binary-tree/
// youtube link-https://www.youtube.com/watch?v=Rezetez59Nk&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=17
// striver sheet link-https://takeuforward.org/data-structure/calculate-the-diameter-of-a-binary-tree/


// DIAMETER of a tree-DEFINATION 
// has 2points
// 1-longest path between 2 nodes
// 2-path does not need to pass thorough root it may pass or may not pass


// approach-1
// simpy stand at every node and calculate for left height and right height
// just add them in diameter or variable of your choice

approach-2
// just simply calculate the the maximum of lh and rh at every step 

class Solution {
public:
    int solve(TreeNode*  node,int& diameter){
        if(node==NULL)
           return 0;
        int lh=solve(node->left,diameter);
        int rh=solve(node->right,diameter);
        diameter=max(diameter,lh+rh);
    return 1+max(lh,rh);
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int diameter=0;
        solve(root,diameter);
        return diameter;
        
    }
};