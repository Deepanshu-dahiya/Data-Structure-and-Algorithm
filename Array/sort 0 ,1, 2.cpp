/* Write a program to sort 0,1,2 without using the sorting algorithm */
/* Time complexity for the code is O(n) */

#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *a, int arr_size)
{
    //Write your code here
    int lo=0;
    int high=arr_size-1;
    int mid=0;
    while(mid<=high){
     switch (a[mid]) {

        // If the element is 0
        case 0:
             swap(a[lo++],a[mid++]);
             break;
        case 1:
             mid++;
             break;
        case 2:
            swap(a[mid], a[high--]);
            break;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}
