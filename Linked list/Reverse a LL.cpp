/*Reverse a Linked List*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

struct LinkedList{
    Node *head;
    LinkedList(){
    head=NULL;
    }
    void reverse(){
    Node *curr=head;
    Node *prev=NULL,*next=NULL;
    while(curr!=NULL){
        // Store next
        next=curr->next;

            // Reverse current node's pointer
        curr->next=prev;
          // Move pointers one position ahead.
        prev=curr;
        curr=next;
    }
        head=prev;


    }

     void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

};

int main()
{
     LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
    l1.push(975);

    cout << "Given linked list\n";
    ll.print();

    ll.reverse();

    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;

}
