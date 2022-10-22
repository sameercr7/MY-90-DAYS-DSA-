// link-https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

//  striver link-https://www.youtube.com/watch?v=q_a6lpbKJdw&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=23

// sheet link-https://takeuforward.org/data-structure/vertical-order-traversal-of-binary-tree/



class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> mp;
        queue<pair<TreeNode*,pair<int,int>>> todo;
//         now push root value in todo queue
//         root,vertical,level
        todo.push({root,{0,0}});
            while(!todo.empty()){
                auto p=todo.front();
                todo.pop();
//                 tree structure for vertical and level
                TreeNode* node=p.first;
                int x=p.second.first,y=p.second.second;
                mp[x][y].insert(node->val);
//                 now just check left and right exist if exist then put it in the queue
                if(node->left){
                    todo.push({node->left,{x-1,y+1}});
                }
                if(node->right){
                    todo.push({node->right,{x+1,y+1}});
                }
                
            }
//         now last step
        vector<vector<int>> ans;
        for(auto p:mp){
            vector<int>col;
//             loop for level
            for(auto q:p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};