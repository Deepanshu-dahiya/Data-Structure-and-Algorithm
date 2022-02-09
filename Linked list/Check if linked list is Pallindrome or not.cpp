/* Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

Example 1:

Input:
N = 3
value[] = {1,2,1}
Output: 1
Explanation: The given linked list is
1 2 1 , which is a palindrome and
Hence, the output is 1.
*/


struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
  //Function to check whether the list is palindrome.
    Node* reverse(Node *head1){
       Node *next=NULL;
       Node *prev=NULL;
       while(head1){
           next=head1->next;
           head1->next=prev;
           prev=head1;
           head1=next;
       }
        
       return prev;
   }
   bool isPalindrome(Node *head)
   {
       //Your code here
       if(head==NULL || head->next==NULL){
           return true;
       }
       Node *d=head;
       Node *fast=head;
       Node *slow=head;
       while(fast->next && fast->next->next){
           slow=slow->next;
           fast=fast->next->next;
       }
       slow->next=reverse(slow->next);
       slow=slow->next;
       while(slow){
           if(d->data!=slow->data)
               return false;


           else{
             d=d->next;
             slow=slow->next;
           }
       }
       return true;
   }
