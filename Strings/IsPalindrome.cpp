/*check whether the string is palindrome or not*/


#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string S)
	{
	    // Your code goes here
	    int start=0;
	    int end=S.size()-1;

	    while(start<end){
	        if(S[start]==S[end]){
	            start+=1;
	            end-=1;
	        }
	        else{
	            return 0;
	        }
	    }
	    return 1;
	}
int main(){

string ss;
cin>>ss;
int a =isPalindrome(ss);
if(a==1){
    cout<<"string is Palindrome :";
}else{
cout<<"string is not palindrome ";}

return 0;



}
