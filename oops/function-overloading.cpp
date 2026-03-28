#include<iostream>
using namespace std;

class Print{
    public:
        void show(int x){
            cout<<"integer is: "<<x<<endl;
        }

        void show(string str){
            cout<<"string is: "<<str<<endl;
        }
};

int main(){
    Print p1;
    p1.show(25);
    p1.show("apna college");

    return 0;
}