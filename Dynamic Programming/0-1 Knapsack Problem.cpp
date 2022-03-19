/*You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. Note that we have only one quantity of each item.
In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or dont pick it (0-1 property).

Example 1:

Input:
N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
Output: 3
Example 2:

Input:
N = 3
W = 3
values[] = {1,2,3}
weight[] = {4,5,6}
Output: 0
Your Task:
Complete the function knapSack() which takes maximum capacity W, weight array wt[], value array val[], and the number of items n as a parameter and returns the maximum possible value you can get.

Expected Time Complexity: O(N*W).
Expected Auxiliary Space: O(N*W)

Constraints:
1 ≤ N ≤ 1000
1 ≤ W ≤ 1000
1 ≤ wt[i] ≤ 1000
1 ≤ v[i] ≤ 1000
*/

#include<bits/stdc++.h>
using namespace std;




int dp[1001][1001];
    int solve(int wt[],int val[],int W,int n){
        if(W==0 or n==-1){
            return 0;
        }
        if(dp[n][W]!=-1)return dp[n][W];
        if(wt[n]>W){
            return dp[n][W]=solve(wt,val,W,n-1);
        }
        int a,b;
        a=val[n]+solve(wt,val,W-wt[n],n-1);
        b=solve(wt,val,W,n-1);
        return dp[n][W]=max(a,b);
    }

    int knapSack(int W, int wt[], int val[], int n)
    {
       // Your code here
       dp[n][W];
       memset(dp,-1,sizeof(dp));
       return solve(wt,val,W,n-1);
    }

int main(){
int t_case;
cin>>t_case;
while(t_case--){
    int n;cin>>n;
    int val[n];
    int weight[n];
    for(int i=0;i<m;i++){
        cin>>weight[i];
    }
    for(int i=0;i<m;i++){
        cin>>val[i];
    }
    int maxweight;cin>>maxweight;
    cout<<knapSack(maxweight,weight,val,n);
}
return 0;

}
