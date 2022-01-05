/*Given an n x n matrix mat[n][n] of integers, find the maximum value of mat(c, d) – mat(a, b)
over all choices of indexes such that both c > a and d > b.
Example:

Input:
mat[N][N] = {{ 1, 2, -1, -4, -20 },
             { -8, -3, 4, 2, 1 },
             { 3, 8, 6, 1, 3 },
             { -4, -1, 1, 7, -6 },
             { 0, -4, 10, -5, 1 }};
Output: 18
The maximum value is 18 as mat[4][2]
- mat[1][0] = 18 has maximum difference.
*/

#include<bits/stdc++.h>
using namespace std;
#define N 5

int findMaxValue(int mat[][N])
{

    int maxvalue=INT_MIN;

    int m[N][N];

    //Filling MAX[N-1][N-1] with the last element of row and column index of Mat[N-1][N-1];

    m[N-1][N-1]=mat[N-1][N-1];
    int maxv=mat[N-1][N-1];
    //filling last row
    for(int i=N-2;i>=0;i--){
        if(mat[N-1][i]>maxv)
            maxv=mat[N-1][i];
        m[N-1][i]=maxv;
    }

    //filling last column

    for(int i=N-2;i>=0;i--){
        if(mat[i][N-1]>maxv)
            maxv=mat[N-1][i];
        m[i][N-1]=maxv;
    }

    //pre process for the rest of the array

    for(int i=N-2;i>=0;i--){
        for(int j=N-2;j>=0;j--){
                //maxvalue
            if(m[i+1][j+1]-mat[i][j]>maxvalue){
                maxvalue=m[i+1][j+1]-mat[i][j];
            }

                // set maxArr (i, j)
            m[i][j]=max(mat[i][j],max(m[i][j+1],m[i+1][j]));

        }
    }
    return maxvalue;

}


int main()
{

    int mat[N][N] = {
                      { 1, 2, -1, -4, -20 },
                      { -8, -3, 4, 2, 1 },
                      { 3, 8, 6, 1, 3 },
                      { -4, -1, 1, 7, -6 },
                      { 0, -4, 10, -5, 1 }
                    };
    int aa=findMaxValue(mat);
    cout << "Maximum Value is "
         << aa;

    return 0;
}
