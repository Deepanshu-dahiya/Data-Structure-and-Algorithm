/*Given an array of size n, find all elements in array that appear more than n/k times.
For example, if the input arrays is {3, 1, 2, 2, 1, 2, 3, 3} and k is 4, then the output should be [2, 3].
Note that size of array is 8 (or n = 8), so we need to find all elements that appear more than 2 (or 8/4) times.
There are two elements that appear more than two times, 2 and 3. */

/*Solution Time Complexity : O(N)
Space Complexity :O(N)*/

#include <bits/stdc++.h>
using namespace std;

void printElements(int arr[], int n, int k)
{

    // Calculating n/k
    int x = n / k;

    // Counting frequency of every
    // element using Counter
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]] += 1;

    // Traverse the map and print all the elements with occurrence
    // more than n/k times
    for (int it = 0; it < mp.size(); it++) {
        if (mp[it] > x)
            cout << (it) << endl;
    }
}


int main()
{
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}

    printElements(arr, n, k);
}
