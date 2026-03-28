#include<iostream>
using namespace std;

int sum(int a, int b=9){
    int sum=a+b;
    return sum;
}

void sayHello(){
    cout<<"Hello"<<endl;;
}

void assistant(){
    sayHello();
    cout<<"work done\n";
}

int main(){
    // sayHello(); //function call
    assistant();
    int s=sum(3);
    cout<<"sum="<<s<<endl;
    return 0;
}