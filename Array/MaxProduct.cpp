/*Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.
Solution is :O(n) time complexity;*/


#include<bits/stdc++.h>
using namespace std;


long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long minval=arr[0];
	    long long maxval=arr[0];
	    long long Product=arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i]<0){
	            swap(minval,maxval);

	        }

	        minval=min((long long) arr[i],minval*arr[i]);
	        maxval=max((long long )arr[i],arr[i]*maxval);

	        Product=max(Product,maxval);

	    }

	    return Product;

}

int main(){
int n;cout<<"Size of vector  ";
cin>>n;
 vector<int> v1;
for(int i=0;i<n;i++){
        int ii;cin>>ii;v1.push_back(ii);

}
long long int  ans=maxProduct(v1,n);
cout<<" Maximum product is "<<ans;
return 0;
}
