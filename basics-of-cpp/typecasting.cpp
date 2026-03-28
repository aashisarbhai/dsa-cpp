#include <iostream>
using namespace std;

int main(){
    //implicit conversion
    cout<<(10/3)<<endl;      //int value
    cout<<(10/3.0)<<endl;    //float
    cout<<(10.0/3)<<endl;    //float
    cout<<('A'+1)<<endl;
    //also known as type promotion  
    //bool->char->int->float->double

    //explicit conversion
    cout<<(int)('A')<<endl;
    float pi=3.14;
    cout<<(int)(pi)<<endl;
    cout<<((float)10/3)<<endl;
    cout<<(char)('A'+1)<<endl;

    return 0;
}