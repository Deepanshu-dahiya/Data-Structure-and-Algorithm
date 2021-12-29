/*Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.
The individual elements of three sets can appear in any order. You are required to return the modified array

Input:
n = 5
A[] = {1, 2, 3, 3, 4}
[a, b] = [1, 2]
Output: 1
Explanation: One possible arrangement is:
{1, 2, 3, 3, 4}. If you return a valid
arrangement, output will be 1.

Your Task:
You dont need to read input or print anything. The task is to complete the function threeWayPartition() which takes the array[],
a and b as input parameters and modifies the array in-place according to the given conditions.
Note: The generated output is 1 if you modify the given array successfully.


Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

*/


#include<bits/stdc++.h>
using namespace std;
void threeWayPartition(vector<int>& arr,int a, int b)
    {

    int start=0;
    int end=arr.size()-1;
    for(int i=0;i<=end;i++){
        if(arr[i]<a){
            swap(arr[i],arr[start]);
            start++;

        }
        else if(arr[i]>b){
            swap(arr[i],arr[end]);
            end--;
            i--;
        }
        }

        // code here
    }
