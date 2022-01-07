/*
Given a binary string str of length N, the task is to find the maximum count of consecutive substrings str can be
divided into such that all the substrings are balanced i.e. they have equal number of 0s and 1s.
If it is not possible to split str satisfying the conditions then print -1.
*/

#include<bits/stdc++.h>
using namespace std;

int maxSubStr(string ss){
int count_0=0,count_1=0,cnt=0;

for(int i=0;i<ss.size();i++){
    if(ss[i]=='0'){
        count_0+=1;
    }
    else{
        count_1+=1;
    }
    if(count_0==count_1){
        cnt+=1;
    }
}
if(count_0!=count_1){
    return -1;

}
return cnt;


}

int main(){
string ss;cout<<"Input Binary  string "<<endl;
cin>>ss;
int n=maxSubStr(ss);
cout<<"maximum count of consecutive substrings str can be divided into such that all the substrings "<<n<<endl;
return 0;
}
