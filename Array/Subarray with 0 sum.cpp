/*Your Task:
You only need to complete the function subArrayExists() that takes array and n as parameters and returns true or false depending upon whether there is a subarray present with 0-sum or not. Printing will be taken care by the drivers code.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

Constraints:
1 <= n <= 104
-10^5 <= a[i] <= 10^5*/


#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


 bool subArrayExists(int arr[], int n)
{
    int s=0;    //sum
    unordered_map<int,int>m1;
    for(int i=0;i<n;i++){
        s=s+arr[i];
        if(s==0 || m1[s] || arr[i]==0){
            return true;
        }
        else{
            m1[s]=1;
        }
    }
    return false;
}

int main(){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];}
    bool aa=subArrayExists(arr,n);
    cout<<aa<<endl;
    return 0;
}
