/*he count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. Then for each group, say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying.

For example, the saying and conversion for digit string "3322251":


Given a positive integer n, return the nth term of the count-and-say sequence.
*/
#include<iostream>
using namespace std;
#include<string>
/*string countAndSay(int n) {   // this code also works fine
        if(n==1)return "1";
        if(n==2)return "11";
        string s=countAndSay(n-1);
        string res="";
        int counter=0;
        for(int i=0;i<s.length();i++){
            counter++;
            //segregating into groups
            if(i==s.length()-1 || s[i]!=s[i+1]){
                res=res+to_string(counter)+s[i];
                counter=0;
            }
        }
        return res;

    }*/
 string countAndSay(int n) {
        if(n==1)return "1";
        if(n==2)return "11";
        string s="11";
        for(int i=3;i<=n;i++){
            string t="";
            s=s+'&';//adding a deliemeter

            int c=1;
            for(int j=1;j<s.length();j++){
                if(s[j]!=s[j-1]){
                    t=t+to_string(c);//adding frequency
                    t=t+s[j-1];//adding digit
                    c=1;
                }else{
                    c++;
                }
            }
            s=t;
        }
        return s;
    }
int main(){
   int n;cout<<"enter the value for which u want to find out count and say";cin>>n;
   string ss=countAndSay(n);
   cout<<endl<<"value of count and say is "<<ss;
    return 0;
}
