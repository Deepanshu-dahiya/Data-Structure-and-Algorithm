/*Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Example 1:

Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and
smallest positive missing number is 1.
Example 2:

Input:
N = 3
Arr[] = {1, 3, 3}
Output: 3 2
Explanation: Repeating number is 3 and
smallest positive missing number is 2.
Your Task:
You don't need to read input or print anything. Your task is to complete the function findTwoElement() which takes the array of integers arr and n as parameters and returns an array of integers of size 2 denoting the answer ( The first index contains B and second index contains A.)

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

void printTwoElements(int arr[], int size)
{
    int i;
    cout << " The repeating element is ";

    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << "\n";
    }

    cout << "and the missing element is ";
    for (i = 0; i < size; i++) {
        if (arr[i] > 0)
            cout << (i + 1);
    }
}

/* Driver code */
int main()
{
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr, n);
}
