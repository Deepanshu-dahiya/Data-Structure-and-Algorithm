/*Given a boolean 2D array of n x m dimensions where each row is sorted.
Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:
Input:
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).
You don't need to read input or print anything. Your task is to complete the function rowWithMax1s()
which takes the array of booleans arr[][], n and m as input parameters and returns the 0-based index of the first row
that has the most number of 1s. If no such row exists, return -1.
Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int row_index=-1,max_1=0;
	    for(int i=0;i<n;i++){
	        int count_1=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	                count_1+=1;
	            }
	        }

	        if(count_1>max_1){
	            max_1=count_1;
	            row_index=i;

	        }

	    }
	    return row_index;

}


 int main(){
 int t_case;cout<<"number of test case  ";cin>>t_case;
 while(t_case--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int aa=rowWithMax1s(arr,  n,m);
    cout<<" ROw with max 1 is "<<aa<<endl;
 }
 return 0;
 }
