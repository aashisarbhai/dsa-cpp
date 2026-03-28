#include <iostream>
using namespace std;

int main(){
    //Q1
    // int num;
    // cout<<"enter the number"<<endl;
    // cin>>num;

    // if(num>0){
    //     cout<<"number is positive"<<endl;
    // }else if(num<0){
    //     cout<<"number is negative"<<endl;
    // }else if(num==0){
    //     cout<<"number is zero"<<endl;
    // }else{
    //     cout<<"invalid number"<<endl;
    // }


    //Q2
    // int year;
    // cout<<"enter the year"<<endl;
    // cin>>year;

    // if(year%4==0){
    //     cout<<"it is a leap year"<<endl;
    // }else{
    //     cout<<"it is not a leap year"<<endl;
    // }

    //Q3
    //0,63

    //Q4
    //bye

    //Q5
    int num;
    cout<<"enter three digit number"<<endl;
    cin>>num;

    int n=num;
    int digit1=num%10;
    num/=10;
    int digit2=num%10;
    num/=10;
    int digit3=num;

    int cubeSum=digit1*digit1*digit1+digit2*digit2*digit2+digit3*digit3*digit3;

    if(cubeSum==n){
        cout<<"armstrong number";
    }else{
        cout<<"not an armstrong number";
    }

    return 0;
}