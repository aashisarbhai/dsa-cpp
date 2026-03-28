#include<iostream>
using namespace std;

int main(){
    // int x=10;
    // int *ptr=&x;
    // cout<<ptr<<endl;
    // cout<<++ptr<<endl;
    // cout<<--ptr<<endl;
    // cout<<ptr+3<<endl;

    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++){
        cout<<*arr<<" ";
        *arr=*arr+1;
    }

    return 0;
}