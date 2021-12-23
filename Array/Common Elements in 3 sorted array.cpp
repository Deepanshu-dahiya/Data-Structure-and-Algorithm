/*Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?
Your Task:
You don't need to read input or print anything. Your task is to complete the function commonElements() which take the 3 arrays A[], B[], C[] and their respective sizes n1, n2 and n3 as inputs and returns an array containing the common element present in all the 3 arrays in sorted order.
If there are no such elements return an empty array. In this case the output will be printed as -1.



Expected Time Complexity: O(n1 + n2 + n3)
Expected Auxiliary Space: O(n1 + n2 + n3)*/


#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements(int a[],int b[],int c[],int n1,int n2,int n3){
    unordered_set<int> uset,uset1,uset2;
    vector<int> o1;
    for(int i=0;i<n1;i++){
        uset1.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        uset2.insert(b[i]);
    }
    //checking if elements are present in 3rd set

    for(int i=0;i<n3;i++){
        if(uset1.find(c[i])!=uset.end() &&  uset2.find(c[i])!=uset.end()){
            //using 3rd set  to stop duplicates
            if(uset.find(c[i])==uset.end()){
                o1.push_back(c[i]);}
            uset.insert(c[i]);
        }
    }
    return o1;
}
int main()
{
 int n1,n2,n3;
 cin>>n1>>n2>>n3;
 int arr1[n1],arr2[n2],arr3[n3];
 for(int i=0;i<n1;i++){cin>>arr1[i];}
 for(int i=0;i<n2;i++){cin>>arr2[i];}
 for(int i=0;i<n3;i++){cin>>arr3[i];}

 vector<int>i1=commonElements(arr1,arr2,arr3,n1,n2,n3);
 cout<<"Common Elements in three array are ";
 for(int i=0;i<i1.size();i++){
    cout<<i1[i]<<" ";
 }
return 0;
}

