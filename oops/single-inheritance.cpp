// #include<iostream>
// using namespace std;

// class Animal{
//     public:
//         string color;

//         void eat(){
//             cout<<"eats"<<endl;
//         }

//         void breathe(){
//             cout<<"breathes"<<endl;
//         }
// };

// class Fish : public Animal{
//     public: 
//         int fins;

//         void swims(){
//             breathe();
//             cout<<"swims"<<endl;
//         }
// };

// int main(){
//     Fish f1;
//     f1.fins=3;
//     cout<<f1.fins<<endl;
//     f1.swims();
//     f1.eat();

//     return 0;
// }


#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"parent class constructor"<<endl;
        }

        ~Parent(){
            cout<<"parent class destructor"<<endl;
        }
};

class Child:public Parent{
    public:
        Child(){
            cout<<"child class constructor"<<endl;
        }

        ~Child(){
            cout<<"child class destructor"<<endl;
        }
};

int main(){
    Child ch1;

    return 0;
}