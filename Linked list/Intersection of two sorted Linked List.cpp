/* Given two lists sorted in increasing order, create a new list representing the intersection of the two lists. The new list should be made with its own memory — the original lists should not be changed.
Note: The list elements are not necessarily distinct.

Example 1:

Input:
L1 = 1->2->3->4->6
L2 = 2->4->6->8
Output: 2 4 6
Explanation: For the given first two
linked list, 2, 4 and 6 are the elements
in the intersection.
Example 2:

Input:
L1 = 10->20->40->50
L2 = 15->40
Output: 40
Your Task:
The task is to complete the function intersection() which should find the intersection of two linked list and add all the elements in intersection to the third linked list and return the head of the third linked list.

Expected Time Complexity : O(n+m)
Expected Auxilliary Space : O(n+m)
Note: n,m are the size of the linked lists.*/


struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code
    Node *ptr1=head1;
    Node *ptr2=head2;
    Node *head=NULL;
    Node *curr=NULL;
    while(ptr1!=NULL and ptr2!=NULL){
        if(ptr1->data==ptr2->data){
            if(head==NULL){
            Node*temp= new Node(ptr1->data);
            head=temp;
            curr=temp;

            }
            else{
                Node *temp=new Node(ptr1->data);
                curr->next=temp;
                curr=curr->next;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else{
            if(ptr1->data<ptr2->data){
                ptr1=ptr1->next;
            }
            else{
                ptr2=ptr2->next;
            }
        }
        }

    return head;

}
