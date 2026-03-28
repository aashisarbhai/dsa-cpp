#include<iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"eats"<<endl;
        }

        void breathe(){
            cout<<"breathes"<<endl;
        }
};

class Bird: public Animal{
    public:
        void fly(){
            cout<<"can fly"<<endl;
        }
};

class Fish: public Animal{
    public: 
        void swim(){
            cout<<"can swim"<<endl;
        }
};

class Mammal:public Animal{
    public:
        void walk(){
            cout<<"can walk"<<endl;
        }
};

int main(){
    Bird b1;
    b1.eat();
    b1.fly();

    Fish f1;
    f1.swim();
    f1.eat();

    Mammal m1;
    m1.walk();
    m1.eat();

    return 0;
}