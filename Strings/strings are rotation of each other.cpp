/*Given a string s1 and a string s2, write a snippet to say whether s2 is a rotation of s1?
(eg given s1 = ABCD and s2 = CDAB, return true, given s1 = ABCD, and s2 = ACBD , return false)
*/
#include<iostream>
using namespace std;
#include<string>

bool areRotation(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    string temp=s1+s1;
    return (temp.find(s2)!=string::npos);

}

int main(){
    string s1,s2;
    cout<<"enter both the strings ";
    cin>>s1>>s2;

    if(areRotation(s1,s2)){
        cout<<"String 2 is rotation of string 1 ";
    }
    else{
        cout<<"string is not rotation ";
    }
    return 0;
}
