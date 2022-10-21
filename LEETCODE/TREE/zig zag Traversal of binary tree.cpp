// zig-zag traversal

// link=https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
// striver link-https://www.youtube.com/watch?v=3OXWEdlIGl4&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=20
// striver sheet link-https://takeuforward.org/data-structure/zig-zag-traversal-of-binary-tree/


// Approach
// everything is s same as level order traversal
// difference is just that in this we use flag while stroring
// "True" means store the values of that level from L->R
// "false" means store the values of that level from R->L
// as we will traverse the level as then onlu we have to chnage flag value as traversal is zig-zag

// time complexity=o(n)
// space complexity=O(n)



class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
   vector<vector<int>> res;
//    base condition
   if(root==NULL)
     return res;
  queue<TreeNode*> noddy;
//   first thing is to store the root in queue
noddy.push(root);
// L->R
bool flag=true;
while(!noddy.empty()){
    int size=noddy.size();
    // form one vector as a row to save the values
    vector<int> row(size);
    for(int i=0;i<size;i++){
        // form quue structure
        TreeNode* node=noddy.front();
        noddy.pop();
        // now find the position
        // most important condtion
        int index=(flag) ? i:(size-1-i);
        // why not root->val bcoz we had made structure with node  "Treenode* node=noddy.front();""
        row[index]=node->val;
        if(node->left)
            noddy.push(node->left);
        if(node->right)
           noddy.push(node->right);
    } 
    // to change the value at every step 
    flag=!flag;
     res.push_back(row);      

    }
    return res;
}
 
};