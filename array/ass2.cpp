#include<iostream>
using namespace std;

void vowelCount(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    cout<<count;
}

bool areAlmostEqual(string s1,string s2){
    if(s1.length()!=s2.length()) return false;

    char diffChar1,diffChar2;
    int diff=0;

    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            if(diff==0){
                diffChar1=s1[i];
                diffChar2=s2[i];
            }else{
                if(s1[i]!=diffChar2||s2[i]!=diffChar1){
                    return false;
                }
            }
            diff++;
        }
        if(diff>2){
            return false;
        }
    }
    if(diff==1){
        return false;
    }
    return true;
}

int main(){
    string str="aashi sarbhai";
    //vowelCount(str);
    string s1="bank";
    string s2="kalb";
    cout<<areAlmostEqual(s1,s2);

    return 0;
}