/*Given an array of positive integers.
Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers,
the consecutive numbers can be in any order.
Solution is :O(n) time complexity;
Space Complexity is : O(n)*/


#include<bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      set<int>  hashset;
      for(int i=0;i<N;i++){
          hashset.insert(arr[i]);
      }
      int longest_streak=0;

      for(int i=0;i<N;i++){
          int num=arr[i];
          if(!hashset.count(num-1)){
              int currnum=num;
              int current_streak=0;
              while(hashset.count(currnum+1)){
                  currnum+=1;
                  current_streak+=1;
              }
              longest_streak=max(longest_streak,current_streak);
          }
      }
      return longest_streak+1;
}

int main(){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int a=findLongestConseqSubseq(arr,n);
cout<<" Length of Longest Subsequence is "<<a<<endl;
return 0;
}
