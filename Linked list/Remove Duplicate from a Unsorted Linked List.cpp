/* Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed.

Example 1:

Input:
N = 4
value[] = {5,2,2,4}
Output: 5 2 4
Explanation:Given linked list elements are
5->2->2->4, in which 2 is repeated only.
So, we will delete the extra repeated
elements 2 from the linked list and the
resultant linked list will contain 5->2->4
Example 2:

Input:
N = 5
value[] = {2,2,2,2,2}
Output: 2
Explanation:Given linked list elements are
2->2->2->2->2, in which 2 is repeated. So,
we will delete the extra repeated elements
2 from the linked list and the resultant
linked list will contain only 2.
Your Task:
You have to complete the method removeDuplicates() which takes 1 argument: the head of the linked list.  Your function should return a pointer to a linked list with no duplicate element.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)*/


struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head)
    {
     // your code goes here
       if(head==NULL||head->next==NULL)return head;
    Node *temp=head;
    unordered_map<int,int>m;
    Node *prev=NULL;
    while(temp!=NULL){
        m[temp->data]++;
        if(m[temp->data]>1){
            prev->next=temp->next;
            Node *todelete=temp;
            todelete->next=NULL;
            delete(todelete);
            temp=prev->next;
        }else{
           prev=temp;
           temp=temp->next;
        }
    }
    return head;
    }
