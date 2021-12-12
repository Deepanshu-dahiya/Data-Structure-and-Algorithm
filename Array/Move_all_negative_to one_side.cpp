/*Move all negative numbers to beginning and positive to end with constant extra space
I have used In place Rearranging Algorithm
*/

#include <iostream>
#include <algorithm>
using namespace std;

void  Move_negative(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        if(arr[left]<0 && arr[right]<0){
        left++;}

        else if(arr[left]>0 && arr[right]<0){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        right--;
        left++;
        }

        else{
        right--;
        }

    }

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
    Move_negative(arr,n);
    cout<<endl<<"After moving negative to left side of array ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }

return 0;

}
