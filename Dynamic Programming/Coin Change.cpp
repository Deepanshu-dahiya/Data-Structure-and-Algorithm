/*Given a value N, find the number of ways to make change for N cents, if we have infinite supply of each of S = { S1, S2, .. , SM } valued coins.


Example 1:

Input:
n = 4 , m = 3
S[] = {1,2,3}
Output: 4
Explanation: Four Possible ways are:
{1,1,1,1},{1,1,2},{2,2},{1,3}.
Example 2:

Input:
n = 10 , m = 4
S[] ={2,5,3,6}
Output: 5
Explanation: Five Possible ways are:
{2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5}
and {5,5}.

Your Task:
You don't need to read input or print anything. Your task is to complete the function count() which accepts an array S[] its size m and n as input parameter and returns the number of ways to make change for N cents.


Expected Time Complexity: O(m*n).
Expected Auxiliary Space: O(n).*/

#include<bits/stdc++.h>
using namespace std;





long long int dp[1000][1000];
  long long int solve(int a[],int m,int n){
      if(m==-1 and n>0)
        return 0;
      if (n==0)return 1;
      if (n<0)return 0;
      //memoization step
      if(dp[m][n]!=-1)return dp[m][n];

      return dp[m][n]=solve(a,m,n-a[m]) + solve(a,m-1,n);
}

long long int count(int S[], int m, int n) {
    dp[m][n+1];
    for(int i=0;i<m;i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=-1;
        }
    }
    return solve(S,m-1,n);
        // code here.
}


int main(){
int t_case;
cin>>t_case;
while(t_case--){
    int n,m;cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    cout<<count(arr,m,n);
}
return 0;

}
