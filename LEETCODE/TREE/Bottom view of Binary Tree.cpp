// link=https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1
// yotube link-https://www.youtube.com/watch?v=0FtVY6I4pB8&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=24


// ther is just slight change from top view of binary tree
// and that is we will not have that conditon if(mp.find(line)==mp.end()) coz this time we want the last element in the line
// rest approach is same
// TC=o(n)
// SC=O(n)

class Solution {
  public:
    vector <int> bottomView(Node *root) {
  
 vector<int> ans;
    if(root==NULL)
        return ans;
    queue<pair<Node*,int>> q;
    map<int,int> mp;
//     first we will push the first root and the line no
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int line=it.second;
//         this is for insertinf in the map
        // if(mp.find(line)==mp.end())
            mp[line]=node->data;
        if(node->left!=NULL)
//             why line -1 bcoz we if left exist it means we have to go left for that -1 we have used
            q.push({node->left,line-1});
        if(node->right!=NULL)
//             why line +1 as in right line is +1
            q.push({node->right,line+1});
    }
    for(auto it:mp)
        ans.push_back(it.second);
    return ans;
        
        //Your code here
    }

};