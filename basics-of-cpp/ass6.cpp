#include<iostream>
using namespace std;

int prod(int a,int b){
    return a*b;
}

bool oddEven(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout<<prod(2,3)<<endl;
    cout<<oddEven(2)<<endl;;
    cout<<oddEven(3)<<endl;
    return 0;
}