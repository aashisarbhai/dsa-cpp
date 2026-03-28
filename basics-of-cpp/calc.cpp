#include <iostream>
using namespace std;

int main(){
    int a,b;
    char symbol;

    cout<<"enter operands"<<endl;
    cin>>a>>b;
    cout<<"enter the operator"<<endl;
    cin>>symbol;

    switch(symbol){
        case '+':cout<<a+b;
        break;
        case '-':cout<<a-b;
        break;
        case '*':cout<<a*b;
        break;
        case '/':cout<<a/b;
        break;
        default:cout<<"invalid operator";
    }

    return 0;
}