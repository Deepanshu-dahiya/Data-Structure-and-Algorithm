/*Given a matrix of size r*c. Traverse the matrix in spiral form.

Example 1:

Input:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
Explanation:)*/

#include<bits/stdc++.h>
using namespace std;

 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c){
 vector<int> v1;
 int row_start=0,col_start=0;
 int row_end=r-1,col_end=c-1;

 while(row_start<=row_end && col_start<=col_end){
    for(int col=col_start;col<=col_end;col++){
        if(row_start>row_end || col_start>col_end){
            break;
        }
        v1.push_back(matrix[row_start][col]);
    }
    row_start++;

    for(int row=row_start;row<=row_end;row++){
        if(row_start>row_end || col_start>col_end){
            break;
        }
        v1.push_back(matrix[row][col_end]);
    }
    col_end--;


     for(int col=col_end;col>=col_start;col--){
        if(row_start>row_end || col_start>col_end){
            break;
        }
        v1.push_back(matrix[row_end][col]);
    }
    row_end--;

    for(int row=row_end;row>=col_start;row--){
        if(row_start>row_end || col_start>col_end){
            break;
        }
        v1.push_back(matrix[row][col_start]);
    }
    col_start++;

 }

 return v1;
 }


 int main(){
 int t_case;cout<<"number of test case  ";cin>>t_case;
 while(t_case--){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> matrix(r);
    for(int i=0;i<r;i++){
        matrix[i].assign(c,0);
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    vector<int> result=spirallyTraverse(matrix,r,c);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

 }
 return 0;
 }
