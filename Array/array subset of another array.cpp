/*Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not.
 Both the arrays can be sorted or unsorted.
It may be assumed that elements in both array are distinct.
Your Task:
You don't need to read input or print anything. Your task is to complete the function isSubset() which takes the array a1[], a2[],
its size n and m as inputs and return "Yes" if arr2 is subset of arr1 else return "No" if arr2 is not subset of arr1.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)*/


#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int> s1;

    for(int i=0;i<n;i++){
        s1.insert(a1[i]);
    }

    int count=0;
    for(int j=0;j<m;j++){
        if(s1.find(a2[j])!=s1.end()){
            count++;
        }
    }
    if(count==m){
        return "Yes";
    }
    else{
        return "No";
    }
}
int main(){
int n,m;
cin>>n>>m;
int arr[n];
int ar2[m;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<m;i++){
        cin>>ar2[i];
}
string aa=isSubset(arr,ar2, n, m);
cout<<"aa";

return 0;
}
