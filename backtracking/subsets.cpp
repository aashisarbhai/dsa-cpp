#include<iostream>
using namespace std;

void subsets(string str, string subset){
    if(str.size()==0){
        cout<<subset;
        cout<<endl;
        return;
    }
    char ch=str[0];
    subsets(str.substr(1,str.size()-1),subset+ch);   //yes
    subsets(str.substr(1,str.size()-1),subset);      //no
}

int main(){
    string str="abc";
    string subset="";
    subsets(str,subset);

    return 0;
}