#include <iostream>
using namespace std;

int main(){
    bool isAdult;
    int age;
    cout<<"enter age"<<endl;
    cin>>age;

    isAdult=age>=18?true:false;
    cout<<isAdult;

    return 0;
}