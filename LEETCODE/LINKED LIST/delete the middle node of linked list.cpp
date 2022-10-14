// link-https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
// youtube link-https://www.youtube.com/watch?v=RTNAZimKpfs&t=307s
// striver vedio-https://www.youtube.com/watch?v=sGdwSH8RK-o
// approach -1
// first we count the number of nodes
// then we will divide the node by /2 as we have to take  middle of it
// and we know 1->2->3->4 if we have  to delete the 3rd node then we have to know the node before the actualv node that is 2nd
// simply point the previous node to the next->next .
// lastly return the head 
// we will use a dummy node 

// time complexity=o(n)for counting+o(n/2)for reaching before actual node
// space complexity=o(1)

class Solution {

public:

    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
          return NULL;
        int count=0;
        ListNode*dummy=head;
        while(dummy!=NULL){
            dummy=dummy->next;
            count++;
        }
        // to reach before the actual node
        int limit=(count/2)-1;
        dummy=head;
        while(limit--){
            // so that we reach before the actual node
            dummy=dummy->next;
        }
        // now here is the final twist
        dummy->next=dummy->next->next;
        return head;
    }
};

// approach -2
// use tortise method
// take two slow and fast pointer
// and move slow by 1 and fast by 2 till it reaches to NULL
// and when it will reach to null then our slow pointer eill point to the node before the actual node
// lastly return node


// time complexity=o(n/2)for reaching before actual node
// in this time complexity is improved
// space complexity=o(1)

  class Solution {

public:

    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
          return NULL;
        ListNode*fast=head->next->next;
        ListNode*slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
           slow= slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};

  