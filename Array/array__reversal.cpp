/* Write a program for array or string reversal */


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    cout<<"input array is  ";
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    int start=0,end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start+=1;
        end-=1;
    }
    cout<<endl<<"reversed array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}























