#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool dupli(string str){
    stack<char>s;

    for(int i=0;i<str.size();i++){
        if(str[i]==')'){
            if(s.top()=='('){
                return true;  //duplicate
            }
            while(s.top()!='('){
                s.pop();
            }
            s.pop();
        }else{
            s.push(str[i]);
        }
    }
    return false;
}

int main(){
    string str="((a+b)+(c+d))";
    cout<<dupli(str);

    return 0;
}