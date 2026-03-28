#include<iostream>
using namespace std;

class Animal{
    public: 
        int color;

        void eat(){
            cout<<"Eats"<<endl;
        }

        void breathe(){
            cout<<"breathes"<<endl;
        }
};

class Mammals: public Animal{
    public:
        string bloodType;

        Mammals(){
            bloodType="warm";
        }
};

class Dog: public Mammals{
    public:
        void tailWag(){
            breathe();
            cout<<"wagging tail"<<endl;
        }
};

int main(){
    Dog d1;
    d1.tailWag();
    d1.eat();
    cout<<d1.bloodType<<endl;

    return 0;
}