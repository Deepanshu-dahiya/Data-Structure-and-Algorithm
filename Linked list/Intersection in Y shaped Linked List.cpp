/* Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.



Example 1:

Input:
LinkList1 = 3->6->9->common
LinkList2 = 10->common
common = 15->30->NULL
Output: 15
Explanation:
*/


struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
   //  create a map to store the address of the LL
     unordered_map<Node*,bool>mp;
     while(head1){
         mp[head1]=true;
         head1=head1->next;
     }
    // if we found similiar address allready presnt in the hashmap
    // then return the data which is presnt at this node
    while(head2){
       if(mp[head2])return head2->data;
        head2 = head2->next;
    }
    return -1;
}
