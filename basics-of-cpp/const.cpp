#include<iostream>
#define x 25;                       //will not take space in the memory
using namespace std;

int main(){
    const int y=35;                 //will take space in the memory
    cout<<x;
    cout<<y;
    return 0;
}