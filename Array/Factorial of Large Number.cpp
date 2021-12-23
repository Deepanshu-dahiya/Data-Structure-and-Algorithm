/*
Given an integer N, find its factorial.
Example 1:
Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120*/

#include<bits/stdc++.h>
using namespace std;

vector<int> factorial(int N){
        // code here
        vector<int> res;
        res.push_back(1);
        for(int i=2;i<=N;i++){
            int carry=0;
            for(int j=0;j<res.size();j++){
                int prod=res[j]*i+carry;
                res[j]=prod%10;
                carry=prod/10;
            }
            while(carry!=0){
                res.push_back(carry%10);
                carry=carry/10;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }

int main(){
int n;cin>>n;
vector<int> r1=factorial(n);
cout<<"Factorial of "<<n<<"  is  ";
for(int i=0;i<r1.size();i++){
    cout<<r1[i];
}
return 0;
}

