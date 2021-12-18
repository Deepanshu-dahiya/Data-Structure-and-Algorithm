/*Write an efficient program to print all the duplicates and their counts in the input string */

#include<bits/stdc++.h>
using namespace std;


void printDuplicate(string ss)
{
    //using hasp map to store the frequency
    map<char,int> m1;
    for(int i=0;i<ss.size();i++){
        m1[ss[i]]++;

    }
    cout<<"Duplicate character with there count"<<endl;
    for (auto it : m1) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }

}
int main(){

    string ss;
    cin>>ss;
    printDuplicate(ss);
    return 0;

}
