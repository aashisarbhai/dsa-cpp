#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr=&a;
    int **pptr=&ptr;
    cout<<&a<<"="<<ptr<<endl;
    cout<<&ptr<<"="<<pptr<<endl;
    cout<<*(&a)<<endl;
    cout<<*ptr<<endl;
    int *ptr2=NULL;
    cout<<ptr2<<endl;
    cout<<*ptr2;

    return 0;
}