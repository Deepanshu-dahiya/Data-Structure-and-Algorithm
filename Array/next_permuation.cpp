/*Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
The replacement must be in place and use only constant extra memory.

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]

Time Complexity for the solution is O(n);
*/

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        int k,l;
        for( k=n-2;k>=0;k--){
            if(arr[k]<arr[k+1]){break;}
        }
        if(k<0){
            reverse(arr.begin(),arr.end());
        }
        else{
            for(l=n-1;l>k;l--){
                if(arr[l]>arr[k]){
                    break;
                }
            }
            swap(arr[k],arr[l]);
            reverse(arr.begin()+k+1,arr.end());
        }

}
int main(){
int n;cout<<"Size of vector  ";
cin>>n;
vector<int> v1;
for(int i=0;i<n;i++){
    int a;cin>>a;
    v1.push_back(a);

}
nextPermutation(v1);

cout<<endl<<"output array is ";
for(auto i=v1.begin();i<v1.end();i++){
    cout<<*i<<" ";
}
return 0;
}
