#include<iostream>
using namespace std;

class Car{
    string name;
    string color;

 public:

    Car(){
        cout<<"constructor without parameters"<<endl;
    }   

    Car(string name,string color){
        cout<<"constructor with parameters"<<endl;
        this->name=name;
        this->color=color;
    }

    void start(){
        cout<<"car has started..."<<endl;
    }

    void stop(){
        cout<<"car has stopped..."<<endl;
    }

    //getter
    string getName(){
        return name;
    }
};

int main(){
    Car c0;
    Car c1("maruti","red");
    cout<<c1.getName();
 
    return 0;
}