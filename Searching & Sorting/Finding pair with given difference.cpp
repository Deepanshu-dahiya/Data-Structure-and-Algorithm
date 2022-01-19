/*Given an array Arr[] of size L and a number N, you need to write a program to find if there exists a pair of elements in the array whose difference is N.

Example 1:

Input:
L = 6, N = 78
arr[] = {5, 20, 3, 2, 5, 80}
Output: 1
Explanation: (2, 80) have difference of 78.
Example 2:

Input:
L = 5, N = 45
arr[] = {90, 70, 20, 80, 50}
Output: -1
Explanation: There is no pair with difference of 45.
Your Task:
You need not take input or print anything. Your task is to complete the function findPair() which takes array arr, size of the array L and N as input parameters and returns True if required pair exists, else return False.

Expected Time Complexity: O(L* Log(L)).
Expected Auxiliary Space: O(1).
*/
#include <bits/stdc++.h>
using namespace std;

bool findPair(int arr[], int size, int n){
    //code
    int i=0,j=1;
   sort(arr,arr+size);

   while(i<size && j <size)
   {
       if(abs(arr[i]-arr[j])==n )
           return true;
       else if(abs(arr[i]-arr[j]) <n)
           j++;
       else
           i++;
   }
   return false;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int number;cin>>number;
        if(findPair(arr,n,number)){
            cout<<"Pair is present ";
        }
        else {
            cout<"pair is not presnet "<<endl;
        }
    }
    return 0;
}




