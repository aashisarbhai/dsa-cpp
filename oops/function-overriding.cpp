#include<iostream>
using namespace std;

class Parent{
    public: 
        void show(){
            cout<<"in parent class"<<endl;
        }
};

class Child:public Parent{
    public:
        void show(){
            cout<<"in child class"<<endl;
        }
};

int main(){
    Child c1;
    c1.show();

    return 0;
}