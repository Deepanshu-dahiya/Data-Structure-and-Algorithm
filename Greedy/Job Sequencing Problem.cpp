/*
Given a set of N jobs where each jobi has a deadline and profit associated with it.

Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit associated with job if and only if the job is completed by its deadline.

Find the number of jobs done and the maximum profit.

Note: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job.


Example 1:

Input:
N = 4
Jobs = {(1,4,20),(2,1,10),(3,1,40),(4,1,30)}
Output:
2 60
Explanation:
Job1 and Job3 can be done with
maximum profit of 60 (20+40).
Example 2:

Input:
N = 5
Jobs = {(1,2,100),(2,1,19),(3,2,27),
        (4,1,25),(5,1,15)}
Output:
2 127
Explanation:
2 jobs can be done with
maximum profit of 127 (100+27).

Your Task :
You don't need to read input or print anything. Your task is to complete the function JobScheduling() which takes an integer N and an array of Jobs(Job id, Deadline, Profit) as input and returns the count of jobs and maximum profit.


Expected Time Complexity: O(NlogN)
Expected Auxilliary Space: O(N)*/



#include<bits/stdc++.h>
using namespace std;

struct Job
{
    int id;	 // Job Id
    int dead; // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

    //Function to find the maximum profit and the number of jobs done.
static bool comp(Job a,Job b){
        return a.profit>b.profit;
    }
vector<int> JobScheduling(Job arr[], int n)
    {
        // your code here
        sort(arr,arr+n,comp);
        bool done[n]={0};

        int day=0,profit=0;
        for(int i=0;i<n;i++){
            for(int j=min(n,arr[i].dead-1);j>=0;j--){
                if(done[j]==false){
                    day+=1;
                    profit+=arr[i].profit;
                    done[j]=true;
                    break;
                }
            }
        }
    return {day,profit};

}

int main(){

int t_case;
cin>>t_case;
while(t_case--){
    int n;
    cin>>n;
    Job arr[n];
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        arr[i].id=x;
        arr[i].dead=y;
        arr[i].profit=z;
    }
  vector<int> ans=JobScheduling(arr,n);
  cout<<ans[0]<<" "<<ans[i]<<endl;
}
return 0;
}
