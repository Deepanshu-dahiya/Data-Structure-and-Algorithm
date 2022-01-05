/*Given an NxN matrix Mat. Sort all elements of the matrix.
Example 1:
Input:
N=4
Mat=[[10,20,30,40],
[15,25,35,45]
[27,29,37,48]
[32,33,39,50]]
Output:
10 15 20 25
27 29 30 32
33 35 37 39
40 45 48 50
Explanation:
Sorting the matrix gives this result.
Example 2:

Input:
N=3
Mat=[[1,5,3],[2,8,7],[4,6,9]]
Output:
1 2 3
4 5 6
7 8 9
Explanation:
Sorting the matrix gives this result.
Your Task:
You don't need to read input or print anything. Your task is to
complete the function sortedMatrix() which takes the integer N and the matrix Mat as input parameters and returns the sorted matrix.
Expected Time Complexity:O(N2LogN)
Expected Auxillary Space:O(N2)
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>v;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                v.push_back(Mat[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int k=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                Mat[i][j]=v[k];
                k++;
            }
        }
        return Mat;


}

 int main(){
 int t_case;cout<<"number of test case  ";cin>>t_case;
 while(t_case--){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    arr=sortedMatrix(n,arr);
    cout<<"Output array is "<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
 }
 return 0;
 }
