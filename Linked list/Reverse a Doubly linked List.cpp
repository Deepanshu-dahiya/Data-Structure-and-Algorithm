/*Given a doubly linked list of n elements. The task is to reverse the doubly linked list.
Example 1:
Input:
LinkedList: 3 <--> 4 <--> 5
Output: 5 4 3
Example 2:

Input:
LinkedList: 75 <--> 122 <--> 59 <--> 196
Output: 196 59 122 75
Your Task:
Your task is to complete the given function reverseDLL(), which takes head reference as argument and should reverse the elements so that the tail becomes the new head and all pointers are correctly pointed. You need to return the new head of the reversed list. The printing and verification is done by the driver code.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).
*/

//structure for doubly Linked List
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
 Node* reverseDLL(Node * head)
{
    //Your code here
     Node *temp;
    Node *current = head;

    /* swap next and prev for all nodes of
    doubly linked list */
    while(current!=NULL){
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }


    /* Before changing the head, check for the cases like empty
        list and list with only one node */
    if(temp != NULL )
        head = temp->prev;
    return head;
}
/*Using Stack approach the solution can be like this*/
void reverse()
    {
        stack<int> st;
        Node* temp = head;
        while (temp != NULL) {
            st.push(temp->data);
            temp = temp->next;
        }

        // added all the elements sequence wise in the
        // st
        temp = head;
        while (temp != NULL) {
            temp->data = st.top();
            st.pop();
            temp = temp->next;
        }

        // popped all the elements and the added in the
        // linked list,
        // which are in the reversed order->
    }
