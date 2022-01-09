/*Given a string S consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals
required to convert the string into a balanced expression.
A reversal means changing '{' to '}' or vice-versa.

Example 1:

Input:
S = "}{{}}{{{"
Output: 3
Explanation: One way to balance is:
"{{{}}{}}". There is no balanced sequence
that can be formed in lesser reversals.
​Example 2:

Input:
S = "{{}{{{}{{}}{{"
Output: -1
Explanation: There's no way we can balance
this sequence of braces.
Your Task:
You don't need to read input or print anything. Your task is to complete the function countRev()
which takes the string S as input parameter and returns the minimum number of reversals required to balance the bracket sequence.
 If balancing is not possible, return -1.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).*/


#include<bits/stdc++.h>

using namespace std;

int checkbalanced(string input){


int n=input.size();
if(n%2!=0)return -1;
int temp=0,res=0;
for(int i=0;i<n;i++){
    if(input[i]=='{'){
    temp++;
    }
    else{
        if(temp==0){
        res++;
        temp++;
        }
        else{
        temp--;
        }
    }
 }
return (res+(temp/2));



}

int main(){

string input;
cout<<"Enter the parranthesis"<<endl;
cin>>input;
int aa=checkbalanced(input);
cout<<"Number of reversal required "<<aa<<endl;
return 0;


}
