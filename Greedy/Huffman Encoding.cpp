/*
Given a string S of distinct character of size N and their corresponding frequency f[ ] i.e. character S[i] has f[i] frequency. Your task is to build the Huffman tree print all the huffman codes in preorder traversal of the tree.
Note: While merging if two nodes have the same value, then the node which occurs at first will be taken on the left of Binary Tree and the other one to the right, otherwise Node with less value will be taken on the left of the subtree and other one to the right.
Example 1:
S = "abcdef"
f[] = {5, 9, 12, 13, 16, 45}
Output:
0 100 101 1100 1101 111
Explanation:
Steps to print codes from Huffman Tree
HuffmanCodes will be:
f : 0
c : 100
d : 101
a : 1100
b : 1101
e : 111
Hence printing them in the PreOrder of Binary
Tree.
Your Task:
You don't need to read or print anything. Your task is to complete the function huffmanCodes() which takes the given string S, frequency array f[ ] and number of characters N as input parameters and returns a vector of strings containing all huffman codes in order of preorder traversal of the tree.

Expected Time complexity: O(N * LogN)
Expected Space complexity: O(N)*/



#include<bits/stdc++.h>
using namespace std;

struct Node{
        int data ;
        Node *left, *right ;
        Node(int x)
        {
            data=x ;
            left=NULL ;
            right=NULL ;
        }
    } ;

    //For making a Min Heap
    struct comp{
       bool operator()(Node *a, Node *b){
           return a->data > b->data;
       }
   };
	public:

		//For Encoding the Alphabets
	    void preorder(Node* root, vector<string> &ans, string c)
	    {
	        if(root==NULL)return ;
	        if(root==NULL) return ;
	        if(root->left==NULL and root->right==NULL)
	        {
	            ans.push_back(c) ;
	            return ;
	        }
	        preorder(root->left, ans, c+"0") ;
	        preorder(root->right, ans, c+"1") ;
	    }
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    vector<string> ans ;
		    priority_queue<Node*, vector<Node*>, comp> pq ;

		    //For creating leaf nodes
		    for(int i=0 ; i<f.size() ; i++)
		    {
		        Node* temp=new Node(f[i]) ;
		        pq.push(temp) ;
		    }

		    //Creating the Complete Huffman tree
		    while(pq.size()>1)
		    {
		        Node* x=pq.top() ;
		        pq.pop() ;
		        Node* y=pq.top() ;
		        pq.pop() ;
		        Node* temp=new Node(x->data+y->data) ;
		        temp->left=x ;
		        temp->right=y ;
		        pq.push(temp) ;
		    }
		    preorder(pq.top(),ans,"");
		   // preorder(pq.top(), ans, "") ;
		    return ans ;
		}
int main(){

int t_case;
cin>>t_case;
while(t_case--){
    string S;cin>>S;
    int N=S.length();
    vector<int> f(N);
    for(int i=0;i<N;i++){
        cin>>f[i];
    }
    vector<string> ans=huffmanCodes(S,f,N);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0;
}
