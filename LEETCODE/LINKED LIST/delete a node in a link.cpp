// link-https://leetcode.com/problems/delete-node-in-a-linked-list/
// striver link-https://www.youtube.com/watch?v=icnp4FJdZ_c&t=79s


// simply just copy the node next of next value
// and node nextto its next->next

// agr last node delete krni hoti to norrmal if ki conditon lgate aur point krdeye ki node=NULL


class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
        
    }
};


