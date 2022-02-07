/* Middle point of the Linked List*/
/*Take two pointer fast and slow , both equal to head
traverse the linked list for fast!=NULL && fast->next!=NULL
          slow=slow->next
          fast=fast->next->next;

return slow*/

ListNode* middleNode(ListNode* head) {
        if(head==NULL)return NULL;

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
