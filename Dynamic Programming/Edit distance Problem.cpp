/*Given two strings s and t. Return the minimum number of operations required to convert s to t.
The possible operations are permitted:

Insert a character at any position of the string.
Remove any character from the string.
Replace any character from the string with any other character.


Example 1:

Input:
s = "geek", t = "gesek"
Output: 1
Explanation: One operation is required
inserting 's' between two 'e's of str1.
Example 2:

Input :
s = "gfg", t = "gfg"
Output:
0
Explanation: Both strings are same.


Your Task:
You don't need to read or print anything. Your task is to complete the function editDistance() which takes strings s and t as input parameters and returns the minimum number of operation to convert the string s to string t.


Expected Time Complexity: O(|s|*|t|)
Expected Space Complexity: O(|s|*|t|)

*/
#include <iostream>
using namespace std;

// A dynamic programming based function to find nth
// ;Catalan number
int dp[1001][1001];
int func(string s,string t,int m,int n){
      if(m==-1)return n+1;
      if(n==-1)return m+1;

      if(dp[m][n]!=-1)return dp[m][n];
      if(s[m]==t[n])return dp[m][n]=func(s,t,m-1,n-1);

      int a=func(s,t,m-1,n-1);//replace
      int b=func(s,t,m,n-1);//insert
      int c=func(s,t,m-1,n);//remove

      return dp[m][n]=1+min(a,min(b,c));
  }
int editDistance(string s, string t) {
        // Code here
        memset(dp,-1,sizeof(dp));
        int m=s.length();
        int n=t.length();
        return func(s,t,m-1,n-1);
    }
/
// Driver code
int main()
{
int t_case;
cin>>t_case;

while(t_case--){
    string s,t;
    cin>>s>>t;
    cout<<"Number of minimum operation required to equalize the strings"<<editDistance(s,t);
}
return 0;
}
