/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

 Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true*/


#include<bits/stdc++.h>
using namespace std;


bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size())return false;

        int n=matrix.size();
        int m=matrix[0].size();

        // Following a linear traversal

        int low=0;
        int high=(n*m)-1;
        while(low<=high){

            //For finding the Row index     mid/m;
            //For finding the Column index  mid%m;
            int mid=(low+(high-low)/2);
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            if((matrix[mid/m][mid%m]<target)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }


        }
        return false;
    }


int main(){
int target;
vector<vector<int>> v1;

int n,m;
cout<<"Size of matrix1"<<endl;
cin>>n>>m;
for(int i=0;i<n;i++){
    vector<int> v2;
    int a;
    for(int ii=0;ii<m;ii++){
        cin>>a;
        v2.push_back(a);
    }
    v1.push_back(v2);
}

cin>>target;
bool aa =searchMatrix(v1,target);
if(aa){
    cout<<"Yes it is present ";
}
else {
    cout<<" Not Present ";
}
return 0;


}
