/*Given N friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.
Note: Since answer can be very large, return your answer mod 10^9+7.


Example 1:

Input:N = 3
Output: 4
Explanation:
{1}, {2}, {3} : All single
{1}, {2,3} : 2 and 3 paired but 1 is single.
{1,2}, {3} : 1 and 2 are paired but 3 is single.
{1,3}, {2} : 1 and 3 are paired but 2 is single.
Note that {1,2} and {2,1} are considered same.
Example 2:

Input: N = 2
Output: 2
Explanation:
{1} , {2} : All single.
{1,2} : 1 and 2 are paired.

Your Task:
You don't need to read input or print anything. Your task is to complete the function countFriendsPairings() which accepts an integer n and return number of ways in which friends can remain single or can be paired up.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

*/
#include <iostream>
using namespace std;

// A dynamic programming based function to find nth
// ;Catalan number
int MOD=1000000007;
    long long int func(int n, long long int dp[]){
        if(n<=2)return n;
        if(dp[n]!=-1)return dp[n];
        long long int a =(((n-1)%MOD)*func(n-2,dp)%MOD)%MOD;
        long long int b=func(n-1,dp)%MOD;
        return dp[n]=a+b;
    }
    int countFriendsPairings(int n)
    {
        // code here

        long long int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return func(n,dp)%MOD;
    }
// Driver code
int main()
{
int t_case;
cin>>t_case;

while(t_case--){
    int n;
    cin>>n;
    cout<<"Number of pairs of friend is possible"<<countFriendsPairings(n);
}
return 0;
}
