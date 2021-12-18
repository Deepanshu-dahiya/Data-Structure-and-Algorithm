/*Reverse a string*/

#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {

        int start=0;
        int end=s.size()-1;

        while(start<=end){
            char a=s[start];
            s[start]=s[end];
            s[end]=a;
            start++;
            end--;

        }

    }


int main(){

    vector<char> s;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        char ss;
        cin>>ss;
        s.push_back(ss);

    }
    reverseString(s);
    cout<<"print string  ";
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;
}
