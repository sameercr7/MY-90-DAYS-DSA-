// link-https://leetcode.com/problems/middle-of-the-linked-list/
// striver link-https://takeuforward.org/data-structure/find-middle-element-in-a-linked-list/


// approACH -1
// use simply dummy node concept
// time complexity=o(n)for counting+o(n/2)for reaching before actual node
// space complexity=o(1)

class Solution {

public:

    ListNode*  middleNode(ListNode* head) {
       
        int count=0;
        ListNode* dummy=head;
        while(dummy!=NULL){
            dummy=dummy->next;
            count++;
        }
         dummy=head;
        //  in this we have to find that node not to delete 
         for(int i=0;i<count/2;i++){
            dummy=dummy->next;
         }
    //    we dont have to return dummy=dummy->next->next;
        return dummy;
    }
};

  // approach -2
// use tortise method
// take two slow and fast pointer
// and move slow by 1 and fast by 2 till it reaches to NULL
// and when it will reach to null then our slow pointer eill point to the node before the actual node
// lastly return slow pointer as in question it demands node


// time complexity=o(n/2)for reaching before actual node
// in this time complexity is improved
// space complexity=o(1)

  class Solution {

public:

    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
          return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
           slow= slow->next;
        }
        return slow;
    }
};