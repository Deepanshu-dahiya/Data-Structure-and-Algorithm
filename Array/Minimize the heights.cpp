/*Given an array arr[] denoting heights of N towers and a positive integer K,
you have to modify the height of each tower either by increasing or decreasing them by K only once.
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.
Note: Assume that height of the tower can be negative*/


#include <bits/stdc++.h>
using namespace std;



int getMinDiff(int arr[], int n, int k) {
        
         sort(arr,arr+n);
       int diff=arr[n-1]-arr[0];

       int mini,maxi;
       mini=arr[0];
       maxi=arr[n-1];

       for(int i=1;i<n;i++){
           mini=min(arr[0]+k,arr[i]-k);
           maxi=max(arr[i-1]+k,arr[n-1]-k);
           diff=min(diff,maxi-mini);
       }
      
       return diff;
    }
int main(){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];}
    cout<<"Input array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    int k ;cout<<endl<<"input k";
    cin>>k;

  int aa = getMinDiff(arr,n,k);
  cout<<"get Min Diff is "<<aa;

  return 0;
}
