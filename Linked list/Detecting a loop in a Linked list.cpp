/*Detecting a loop in a linked list*/

#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

bool detectLoop(Node* head)
    {
        // your code here
         Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL &&fast->next!=NULL){
            fast=fast->next->next;

            slow=slow->next;
            if(slow==fast)
            return true;
        }
        return false;
    }

int main(){
int t_case;cin>>t_case;
while(t_case--){
    int n,num;
    cin>>n;
    Node *head,*tail;
    cin>>num;
    head=tail=new Node(num);
    for(int i=0;i<n-1;i++){
        cin>>num;
        tail->next=new Node(num);
        tail=tail->next;
    }
    int pos;
    cin>>pos;
    /*pos is the variable stating where we are required to insert a loop in the Linked List;
    //loophere(head,tail,pos);
}
*/
if(detectLoop(head)){
    cout<<"Loop is present";
}
else{
    cout<<"Loop is not present";
}

}return 0;
}
