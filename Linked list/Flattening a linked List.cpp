/* Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order.
Note: The flattened list will be printed using the bottom pointer instead of next pointer.



Example 1:

Input:
5 -> 10 -> 19 -> 28
|     |     |     |
7     20    22   35
|           |     |
8          50    40
|                 |
30               45
Output:  5-> 7-> 8- > 10 -> 19-> 20->
22-> 28-> 30-> 35-> 40-> 45-> 50.
Explanation:
The resultant linked lists has every
node in a single level.
(Note: | represents the bottom pointer.)
Your Task:
You do not need to read input or print anything.
Complete the function flatten() that takes the head of the linked list as input parameter and returns the head of flattened link list.
Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(1)*/



struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;

	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}

};


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
Node* merge(Node* a ,Node* b){

    // If first linked list is empty then second
    // is the answer
    if(a==NULL)return b;

    // If second linked list is empty then first
    // is the result
    if(b==NULL)return a;


     // Compare the data members of the two linked
    // lists and put the larger one in the result
    Node*result;

    if(a->data<b->data){
        result=a;
        result->bottom=merge(a->bottom,b);
    }
    else{
        result=b;
        result->bottom=merge(a,b->bottom);
    }
    result->next=NULL;
    return result;
}

Node *flatten(Node *root)
{
   // Your code
   if(root==NULL or root->next==NULL)
        return root;
    return merge(root,flatten(root->next));
}
