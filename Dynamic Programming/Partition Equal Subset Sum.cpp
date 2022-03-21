/*Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same.

Example 1:

Input: N = 4
arr = {1, 5, 11, 5}
Output: YES
Explaination:
The two parts are {1, 5, 5} and {11}.
Example 2:

Input: N = 3
arr = {1, 3, 5}
Output: NO
Explaination: This array can never be
partitioned into two such parts.

Your Task:
You do not need to read input or print anything. Your task is to complete the function equalPartition() which takes the value N and the array as input parameters and returns 1 if the partition is possible. Otherwise, returns 0.


Expected Time Complexity: O(N*sum of elements)
Expected Auxiliary Space: O(N*sum of elements)
*/
#include <iostream>
using namespace std;

// A dynamic programming based function to find nth
// ;Catalan number
int dp[1001][1001];
    int solve(int n,int arr[],int s){
        if(n==-1){
            if(s==0)return 1;
            return 0;
        }
        if(s<0){

            return 0;
        }
        if(s==0)return 1;
        if(dp[n][s]!=-1)return dp[n][s];

        return dp[n][s]=solve(n-1,arr,s-arr[n]) || solve(n-1,arr,s);
    }
int equalPartition(int N, int arr[])
    {
        // code here
        int s=0;
        for(int i=0;i<N;i++)s+=arr[i];

        if(s&1)return 0;
        s=s/2;
        dp[N][s];
        memset(dp,-1,sizeof(dp));
        return solve(N-1,arr,s);
     }

// Driver code
int main()
{
int t_case;
cin>>t_case;

while(t_case--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Equal partition is present or not"<<equalPartition(n,arr);
}
return 0;
}
