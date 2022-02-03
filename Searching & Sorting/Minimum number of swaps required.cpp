/*Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.


Example 1:

Input:
nums = {2, 8, 5, 4}
Output:
1
Explaination:
swap 8 with 4.
Example 2:

Input:
nums = {10, 19, 6, 3, 5}
Output:
2
Explaination:
swap 10 with 3 and swap 19 with 5.

Your Task:
You do not need to read input or print anything. Your task is to complete the function minSwaps() which takes the nums as input parameter and returns an integer denoting the minimum number of swaps required to sort the array. If the array is already sorted, return 0.


Expected Time Complexity: O(nlogn)
Expected Auxiliary Space: O(n)*/

#include<bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr,int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
    //Function to find the minimum number of swaps required to sort the array.
int minSwaps(vector<int>&arr)
	{
	    // Code here
	    int ans = 0;
  vector<int>temp = arr;

  // Hashmap which stores the
  // indexes of the input array
  map <int, int> h;
int N=arr.size();
  sort(temp.begin(), temp.end());
  for (int i = 0; i < N; i++)
  {
    h[arr[i]] = i;
  }
  for (int i = 0; i < N; i++)
  {
    // This is checking whether
    // the current element is
    // at the right place or not
    if (arr[i] != temp[i])
    {
      ans++;
      int init = arr[i];

      // If not, swap this element
      // with the index of the
      // element which should come here
      swap(arr, i, h[temp[i]]);

      // Update the indexes in
      // the hashmap accordingly
      h[init] = h[temp[i]];
      h[temp[i]] = i;
    }
  }
  return ans;
}

int main(){
int t_case;cin>>t_case;
while(t_case--){
    int n;cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    cout<<"Minimum number of swaps required"<<minSwaps(v1);
}
return 0;

}



}
