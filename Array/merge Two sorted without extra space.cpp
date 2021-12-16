/*Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order.
 Merge the two arrays into one sorted array in non-decreasing order without using any extra space.

 solution: time complexity of the code is O(n*m(log(n+m))*/

#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=n-1;
	    int j=0;
	    while(i>=0 && j<m){
	        if(arr1[i]>=arr2[j]){
	            swap(arr1[i],arr2[j]);
	            i--;
	            j++;

	        }
	        else{
	            break;
	        }
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);

}
int main(){
    int n,m;
    cout<<"input size of two array sorted  ";
    cin>>n>>m;
    int arr1[n];int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
     for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    merge(arr1,arr2,n,m);
    cout<<"sorted array is  ";
     for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
     for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
