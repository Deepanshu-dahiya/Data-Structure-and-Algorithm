/*
Given a N x N matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.

Example 1:
Input:
N = 4
mat[][] =     {{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }}
K = 3
Output: 27
Explanation: 27 is the 3rd smallest element.
Expected Time Complexity: O(K*Log(N))
Expected Auxiliary Space: O(N)
*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int arr[MAX][MAX];

int kthSmallest(int arr[MAX][MAX], int n, int k)
{
  //Your code here

    vector<int>v1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v1.push_back(arr[i][j]);
        }
    }
    sort(v1.begin(),v1.end());
    return v1.at(k-1);
}

 int main(){
 int t_case;cout<<"number of test case  ";cin>>t_case;
 while(t_case--){
    int n;
    cin>>n;
    //int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int k;cin>>k;
    int a=kthSmallest(arr,n,k);
    cout<<" kth smallest element is " <<a<<endl;
 }
 return 0;
 }
