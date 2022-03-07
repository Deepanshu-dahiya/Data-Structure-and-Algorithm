/*
There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?

Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.


Example 1:

Input:
N = 6
start[] = {1,3,0,5,8,5}
end[] =  {2,4,6,7,9,9}
Output:
4
Explanation:
Maximum four meetings can be held with
given start and end timings.
The meetings are - (1, 2),(3, 4), (5,7) and (8,9)
Example 2:

Input:
N = 3
start[] = {10, 12, 20}
end[] = {20, 25, 30}
Output:
1
Explanation:
Only one meetings can be held
with given start and end timings.

Your Task :
You don't need to read inputs or print anything. Complete the function maxMeetings() that takes two arrays start[] and end[] along with their size N as input parameters and returns the maximum number of meetings that can be held in the meeting room.


Expected Time Complexity : O(N*LogN)
Expected Auxilliary Space : O(N)*/



#include<bits/stdc++.h>
using namespace std;

int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        pair<int,int> arr[n];
        for(int i=0;i<n;i++){
            arr[i]={end[i],start[i]};
        }

        sort(arr,arr+n);
        int cnt=1;
        int lastEndTime=arr[0].first;
        for(int i=1;i<n;i++){
            if(arr[i].second> lastEndTime){
                lastEndTime=arr[i].first;
                cnt++;
            }
        }

        return cnt;
}

int main(){

int t_case;
cin>>t_case;
while(t_case--){
    int n;
    cin>>n;
    int start[n],end[n];
    for(int i=0;i<n;i++){
        cin>>start[i];
    }
    for(int i=0;i<n;i++){
        cin>>end[i];
    }
    cout<<maxMeetings(start,end,n)<<"Maximum number of meetings Possible ";
}
return 0;
}
