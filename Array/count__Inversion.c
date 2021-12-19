/*Given an array of integers. Find the Inversion Count in the array.
Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted.
If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum.
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.


Solution : Just make certain changes in the MergeSort algorithm */

#include<bits/stdc++.h>
using namespace std;


long long merge(long long arr[],long long a1l,long long a1r,long long a2l,long long a2r){
long long inv = 0;
    long long*s=new long long [a1r-a1l+a2r-a2l+2];
long long i=a1l,j = a2l, k = 0;
 while(i<=a1r && j<=a2r){
           if(arr[i]>arr[j]){
              s[k] = arr[j];
               k++;
               j++;
               inv+=a1r-i+1;
           } else {
              s[k] = arr[i];
               i++;
               k++;
           }
       }

       while(i<=a1r){
          s[k] = arr[i];
           i++;
           k++;
       }

       while(j<=a2r){
           s[k] = arr[j];
           k++;
           j++;
       }
       for(long long x=a1l;x<=a2r;x++){
           arr[x] =s[x-a1l];
       }

       return inv;
   }


long long mergeSort(long long arr[],long long low,long long high){
    if(low>=high){
        return 0;

    }

    long long mid=low+(high-low)/2;
    long long  l =  mergeSort(arr,low,mid);   //left sorted
    long long r =mergeSort(arr,mid+1,high);
    long lr=merge(arr,low,mid,mid+1,high);
    return l+r+lr;
}
long long int inversionCount(long long arr[], long long N)
{
        // Your Code Here
        long long ans=mergeSort(arr,0,N-1);
        return ans;
}

int main(){
long long int n;cout<<"Size of vector  ";
cin>>n;
long long int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
long long ans=inversionCount(arr,n);
cout<<" inversion count are "<<ans;
return 0;
}
