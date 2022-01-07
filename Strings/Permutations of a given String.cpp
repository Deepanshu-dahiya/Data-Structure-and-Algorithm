/*
Given a string S. The task is to print all permutations of a given string in lexicographically sorted order.



Example 1:

Input: ABC
Output:
ABC ACB BAC BCA CAB CBA
Explanation:
Given string ABC has permutations in 6
forms as ABC, ACB, BAC, BCA, CAB and CBA


Your Task:
You don't need to read input or print anything. Your task is to complete the function find_permutaion() which takes the string S as input parameter and returns a vector of string in lexicographical order.



Expected Time Complexity: O(n! * n)

Expected Space Complexity: O(n)*/

#include<bits/stdc++.h>
using namespace std;
vector<string>find_permutation(string S)
{
		    // Code here there
		    sort(S.begin(),S.end());
		    vector<string> ans;
		    do{
		        ans.push_back(S);
		    }while(next_permutation(S.begin(),S.end()));
		    return ans;
}
int main(){
string ss;cout<<"Input string "<<endl;
cin>>ss;
vector<string> sss=find_permutation(ss);
for(int i=0;i<sss.size();i++){
    cout<<sss[i]<<" ";
}
return 0;
}
