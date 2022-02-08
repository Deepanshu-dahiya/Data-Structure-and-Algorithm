/* Given two numbers represented by two linked lists of size N and M. The task is to return a sum list.

The sum list is a linked list representation of the addition of two input numbers from the last.

Example 1:

Input:
N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
Output: 3 9 0
Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).
Example 2:

Input:
N = 2
valueN[] = {6,3}
M = 1
valueM[] = {7}
Output: 7 0
Explanation: For the given two linked
list (6 3) and (7), after adding the
two linked list resultant linked list
will be (7 0).
Your Task:
The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the sum list.

Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(Max(N,M)) for the resultant list.*/


struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
Node* reverse(Node *head){
        Node *curr=head;
        Node *prev=NULL;
        Node *next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverse(first);
        second=reverse(second);
        int s=0,c=0;
        Node *temp;
        Node *res=NULL;
        Node *cur=NULL;
        while(first!=NULL || second!=NULL){
            s=c+(first?first->data:0)+(second?second->data:0);
            c=(s>=10)?1:0;
            s=s%10;
            temp=new Node(s);

            if(res==NULL)res=temp;
            else cur->next=temp;

            cur=temp;
            if(first) first=first->next;
            if(second)second=second->next;
        }
        if(c>0){
            temp=new Node(c);
            cur->next=temp;
            cur=temp;
        }

        res=reverse(res);
        return res;
    }
