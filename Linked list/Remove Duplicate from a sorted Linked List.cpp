/*
 Remove Duplicate from sorted Linked List
*/
Node *removeDuplicates(Node *head)
{
 // your code goes here
    Node *curr=head;
    while(curr!=NULL){
        if(curr->next!=NULL && curr->data==curr->next->data){
            Node *temp=curr->next->next;
            Node *to__delete=curr->next;
            delete(to__delete);
            curr->next=temp;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
