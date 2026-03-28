#include<iostream>
using namespace std;

class Animal{
    private:
        string color;

        void eat(){
            cout<<"Animal is eating"<<endl;
        }

        void breathe(){
            cout<<"Animal can breathe"<<endl;
        }
};

class Fish : public Animal{
    public:
        int fins;

        void swims(){
            // eat();
            cout<<"swims"<<endl;
        }
};

int main(){
    Fish f1;
    f1.fins=3;
    f1.swims();
    // f1.breathe();

    return 0;
}