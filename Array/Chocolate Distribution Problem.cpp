/*
Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet.
 Each packet can have a variable number of chocolates. There are M students,
 the task is to distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.
the array sums up to 13.

Your Task:
You don't need to take any input or print anything. Your task is to complete the
function findMinDiff() which takes array A[ ], N and M as input parameters and returns the minimum possible
 difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student.

Expected Time Complexity: O(N*Log(N))
Expected Auxiliary Space: O(1)
*/


#include<bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
       long long sum=a[n-1];
       for(int i=m-1;i<n;i++){
           sum=min(sum,a[i]-a[i-m+1]);
       }
       return sum;
}

int main(){
    long long int  n,x;
vector<long long int> n1;

cin>>n;

for(long long int i=0;i<n;i++){
    cin>>x;
    n1.push_back(x);
}
cin>>x;

long long aa=findMinDiff(n1, n,x);
    //code
cout<<aa<<endl;



return 0;
}
