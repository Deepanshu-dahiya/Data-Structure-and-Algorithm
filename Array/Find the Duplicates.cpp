/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.*/

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& numRay) {
        int arr_size=numRay.size();
    for (int i = 0; i < arr_size; i++) {
		numRay[numRay[i] % arr_size]
			= numRay[numRay[i] % arr_size] + arr_size;
	}

	for (int i = 0; i < arr_size; i++) {
		if (numRay[i] >= arr_size * 2) {
			return i;
		}
	}
        return -1;
    }

int main(){
        int n;cout<<"sizeof vector"<<endl;
        cin>>n;
        int ii;
    vector<int> v1;
    for(int i=0;i<n;i++){
        cin>>ii;
        v1.push_back(ii);
    }
    int aa=findDuplicate(v1);
    cout<<endl<<"Duplicate element in the array is   "<<aa;
return 0;
}
