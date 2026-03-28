#include <iostream>
using namespace std;

int main(){
    // int marks;
    // cout<<"enter marks"<<endl;
    // cin>>marks;

    // if(marks>90){
    //     cout<<"A"<<endl;
    // }else if(marks>=80){
    //     cout<<"B"<<endl;
    // }else{
    //     cout<<"C"<<endl;
    // }

    // int income;
    // cout<<"enter income"<<endl;
    // cin>>income;

    // if(income<500000){
    //     cout<<"0% tax";
    // }else if(500000<income<1000000){
    //     cout<<"20% tax";
    // }else{
    //     cout<<"30% tax";
    // }

    int num1,num2,num3;
    cout<<"enter 3 numbers";
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is the largest number"<<endl;
        }else{
            cout<<num3<<" is the largest number"<<endl;
        }
    }else if(num2>num1){
        if(num2>num3){
            cout<<num2<<" is the largest number"<<endl;
        }else{
            cout<<num3<<" is the largest number"<<endl;
        }
    }else{
        cout<<"invalid";
    }

    return 0;
}