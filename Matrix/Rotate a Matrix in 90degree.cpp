/*Given a square matrix, turn it by 90 degrees in a clockwise direction without using any extra space.
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        //First Transpose the MAtrix
        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                int temp=Mat[i][j];
                Mat[i][j]=Mat[j][i];
                Mat[j][i]=temp;
            }
        }
        //Now reverse the column , for doing that we are just reverse each row;
        for(int i=0;i<N;i++){
            int li=0;
            int ri=N-1;
            while(li<ri){
                int temp=Mat[i][li];
                Mat[i][li]=Mat[i][ri];
                Mat[i][ri]=temp;
                li++;
                ri--;
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
    cout<<"AFter Rotation of 90degree array is "<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
 }
 return 0;
 }
