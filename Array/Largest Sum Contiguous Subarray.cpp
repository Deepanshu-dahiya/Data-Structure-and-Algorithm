/*Given an array Arr[] of N integers.
 Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

 Solve it using Kadane's Algorithm

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.*/







#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){

        // Your code here
        int max_ending_here=0;
        int max_so_far=INT_MIN;

        for(int i=0;i<n;i++){
            max_ending_here+=arr[i];
            if(max_so_far<max_ending_here){
                max_so_far=max_ending_here;
            }
            if(max_ending_here<0){
                max_ending_here=0;
            }
        }
        return max_so_far;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    long long int a=maxSubarraySum(arr,n);

    cout<<"max contiguos sum is "<<a<<endl;
    return 0;
}
