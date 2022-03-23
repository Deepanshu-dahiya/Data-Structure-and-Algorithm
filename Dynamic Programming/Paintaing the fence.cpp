/*
Given a fence with n posts and k colors, find out the number of ways of painting the fence so that not more than two consecutive fences have the same colors. Since the answer can be large return it modulo 10^9 + 7.


Example 1:

Input:
N=3,  K=2
Output: 6
Explanation:
We have following possible combinations:



Example 2:

Input:
N=2,  K=4
Output: 16

Your Task:
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function countWays() that takes n and k as parameters and returns the number of ways in which the fence can be painted.(modulo 109 + 7)



Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
*/
#include<bits/stdc++.h>
using namespace std;

long long countWays(int n, int k){
if(n==1)return (long)k;
       if(k==1 && n>2)return 0;
       long m = 1000000007;

       //When n=2
       long last_two_same = k*1;
       long last_two_diff = k*(k-1);
       long total = last_two_same + last_two_diff;

       for(int i=3; i<=n; i++){
          last_two_same = last_two_diff*1%m;
          last_two_diff = total*(k-1)%m;
          total = (last_two_same + last_two_diff)%m;
       }
      return total;
}
int main(){

int t_case;
cin>>t_case;
while(t_case--){
int n,k;
cin>>n>>k;
cout<<"Number of possible ways to colours "<<countWays(n,k);

}
return 0;
}
