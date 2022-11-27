// link-https://leetcode.com/contest/weekly-contest-320/problems/closest-nodes-queries-in-a-binary-search-tree/
// youtube binarymagic-https://www.youtube.com/watch?v=6BhVLGOg2to&t=151s



// we are not using linear search as constraint is given in 10^5 so it will finally lead to TLE

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& nums) {
        if(root==NULL)
            return;
        
            inorder(root->left,nums);
            nums.push_back(root->val);
            inorder(root->right,nums);
        
    }

    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int> nums;
        inorder(root,nums);
        vector<vector<int>> ans;
//     now in this apply binary search
//      main point is that if if we don inoreder traversal then the output is in sorted order .(this is the property of BST)
        
        for(auto it:queries){
            int no_1=-1,no_2=-1,first=0,last=nums.size()-1;
            while(first<=last){
                int mid=(first+last)/2;
//                 for getting maximum value
                if(nums[mid]<=it)
                {
                    no_1=nums[mid];
                    first=mid+1;
                }
                else
                    last=mid-1;
            }
            first=0,last=nums.size()-1;
             while(first<=last){
                int mid=(first+last)/2;
//                 for getting maximum value
                if(nums[mid]>=it)
                {
                    no_2=nums[mid];
                    last=mid-1;
                }
                else
                    first=mid+1;
            }
            ans.push_back({no_1,no_2});
            
    }
         return ans;
    }
};