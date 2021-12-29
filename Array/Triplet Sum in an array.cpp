/*Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.
Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in
the array sums up to 13.


Your Task:
You don't need to read input or print anything. Your task is to complete the function find3Numbers() which takes the array arr[],
the size of the array (n) and the sum (X) as inputs and returns True if there exists a triplet
 in the array arr[] which sums up to X and False otherwise.

Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(1)
*/


#include<bits/stdc++.h>
using namespace std;

 bool find3Numbers(int A[], int n, int x)
{
    sort(A,A+n);
    int ans=0;
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if((A[i]+A[l]+A[r])==x){
                ans=1;
                break;
            }
            else if((A[i]+A[l]+A[r])<x){
                l++;
            }
            else if((A[i]+A[l]+A[r])>x){
                r--;
            }
        }
        if(ans==1){
            break;
        }
    }

    if(ans==1){
            return true;
        }
        else{
            return false;
        }
}


int main(){
int n,x;
cin>>n>>x;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
bool aa=find3Numbers(arr,  n, x);
cout<<aa;


return 0;
}
