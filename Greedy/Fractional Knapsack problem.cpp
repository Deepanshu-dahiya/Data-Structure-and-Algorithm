/*
Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item.
Example 1:

Input:
N = 3, W = 50
values[] = {60,100,120}
weight[] = {10,20,30}
Output:
240.00
Explanation:Total maximum value of item
we can have is 240.00 from the given
capacity of sack.
Example 2:

Input:
N = 2, W = 50
values[] = {60,100}
weight[] = {10,20}
Output:
160.00
Explanation:
Total maximum value of item
we can have is 160.00 from the given
capacity of sack.


Your Task :
Complete the function fractionalKnapsack() that receives maximum capacity , array of structure/class and size n and returns a double value representing the maximum value in knapsack.
Note: The details of structure/class is defined in the comments above the given function.


Expected Time Complexity : O(NlogN)
Expected Auxilliary Space: O(1)


Constraints:
1 <= N <= 105
1 <= W <= 105*/



#include<bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;
};

static bool comp(Item a , Item b){
        double a1=(double)a.value/a.weight;
        double a2=(double)b.value/b.weight;
        return a1>a2;
}

double fractionalKnapsack(int W, Item arr[], int n)
{
        // Your code here

        sort(arr,arr+n,comp);
        double sum=0;
        for(int i=0;i<n;i++){
            if(arr[i].weight<W){
                sum+=(double)arr[i].value;
                W-=arr[i].weight;
            }
            else{
                sum+=(double)arr[i].value*(double)W/(double)arr[i].weight;
                break;
            }
        }
        return sum;
}

int main(){

int t_case;
cin>>t_case;

while(t_case--){
   int n,w;
   cin>>n>>w;
   Item  arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i].value>>arr[i].weight;
   }
   cout<<fractionalKnapsack(w,arr,n)<<endl;

}
return 0;
}





