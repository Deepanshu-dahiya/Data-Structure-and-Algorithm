/*Stickler the thief wants to loot money from a society having n houses in a single line. He is a weird person and follows a certain rule when looting the houses. According to the rule, he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots. The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy. He asks for your help to find the maximum money he can get if he strictly follows the rule. Each house has a[i]amount of money present in it.

Example 1:

Input:
n = 6
a[] = {5,5,10,100,10,5}
Output: 110
Explanation: 5+100+5=110
Example 2:

Input:
n = 3
a[] = {1,2,3}
Output: 4
Explanation: 1+3=4
Your Task:
Complete the functionFindMaxSum()which takes an array arr[] and n as input which returns the maximum money he can get following the rules

Expected Time Complexity:O(N).
Expected Space Complexity:O(N).

Constraints:
1 ≤ n ≤ 104
1 ≤ a[i] ≤ 104
*/
#include <bits/stdc++.h>
using namespace std;

int FindMaxSum(int arr[], int n)
    {

        // Your code here
        int incl=arr[0];
        int excl=0;
        int ecl_new;
        for(int i=1;i<n;i++){
            ecl_new=max(incl,excl);

            incl=excl+arr[i];
            excl=ecl_new;
        }
        return max(incl,excl);
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
       cout<<"Maximum sum of loot is "<<FindMaxSum(arr,n);
    }
    return 0;
}




