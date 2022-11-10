// top view of Binary Tree
// just whi vertical order wala technique
// line wala concept then just use level order traversal

// link-https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1
// youtube link-https://www.youtube.com/watch?v=Et9OCDNvJ78&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=23
// striver link-https://takeuforward.org/data-structure/top-view-of-a-binary-tree/



class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {



vector<int> ans;

    if(root==NULL)
        return ans;
    queue<pair<TreeNode*,int>> q;
    map<int,int> mp;
//     first we will push the first root and the line no
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int line=it.second;
//         this is for insertinf in the map
        if(mp.find(line)==mp.end())
            mp[line]=node->data;
        if(node->left!=NULL)
//             why line -1 bcoz we if left exist it means we have to go left for that -1 we have used
            q.push({node->left,line-1});
        if(node->right!=NULL)
//             why line +1 as in right line is +1
            q.push(node->right,line+1);
    }
    for(auto it:mp)
        ans.push_back(it.second);
    return ans;
    }}