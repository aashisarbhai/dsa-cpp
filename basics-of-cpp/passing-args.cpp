#include<iostream>
using namespace std;

// int changeA(int a){
//     a=2*10;
//     return a;
// }

// void changeA(int *ptr){
//     *ptr=20;
// }

void changeA(int &a){
    a=20;
}

int main(){
    int a=10;
    cout<<a;
    changeA(a);
    cout<<a;
    return 0;
}