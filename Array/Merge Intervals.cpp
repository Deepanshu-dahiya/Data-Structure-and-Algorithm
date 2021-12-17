/*Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,
and return an array of the non-overlapping intervals that cover all the intervals in the input.

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].*/

/*Time complexity for the approach is : O(nlogn(for sorting)) + o(n)(for traversing)*/


#include<bits/stdc++.h>
using namespace std;


 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged_Interval;
        if(intervals.size()==0){
            return merged_Interval;
        }
        sort(intervals.begin(),intervals.end());

        vector<int> tempInterval=intervals[0];

        for(auto it:intervals){
            if(it[0]<=tempInterval[1]){
                tempInterval[1]=max(it[1],tempInterval[1]);
            }
            else{
                merged_Interval.push_back(tempInterval);
                tempInterval=it;
            }
        }
        merged_Interval.push_back(tempInterval);
        return merged_Interval;

    }

int main(){
    //creating a 2D vector
    vector<vector<int> > vec;



    // Inserting elements into vector
    for (int i = 0; i < 8/* rows */; i++) {
        // Vector to store column elements
        vector<int> v1;
        int ii;
        for (int j = 0; j < 2; j++) {
            cin>>ii;
            v1.push_back(ii);
        }

        // Pushing back above 1D vector
        // to create the 2D vector
        vec.push_back(v1);
    }

    cout<<"Merged Intervals are  ";
    vector<vector<int>> aa=merge(vec);
    // Displaying the 2D vector
    for (int i = 0; i < aa.size(); i++) {
        for (int j = 0; j < aa[i].size(); j++)
            cout << aa[i][j] << " ";
        cout << endl;
    }
    return 0;

}
