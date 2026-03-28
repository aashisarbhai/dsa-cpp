#include<iostream>
using namespace std;

void oddEven(int num){
    if(!(num&1)){
        cout<<"even";
    }else{
        cout<<"odd";
    }
}

int main(){
    oddEven(5);
    oddEven(4);

    return 0;
}