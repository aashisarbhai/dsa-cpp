#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int *mileage;

        Car(string name,string color){
            this->name=name;
            this->color=color;
            mileage=new int;               //dynamic allocation
            *mileage=12;
        }

        Car(Car &original){
            cout<<"copying original to new..."<<endl;
            name=original.name;
            color=original.color;

            //shallow copy
           // mileage=original.mileage;

            //deep copy
            mileage=new int;
            *mileage=*original.mileage;
        }

        ~Car(){
            cout<<"deleting objects";
            if(mileage!=NULL){
                delete mileage;
                mileage=NULL;
            }
        }
};

int main(){
    Car c1("maruti 800","white");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;

    return 0;
}