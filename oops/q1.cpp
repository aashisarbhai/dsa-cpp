#include<iostream>
using namespace std;

class User{
    int id;
    string password;

 public:
    string username;

    User(int id){
        this->id=id;
        cout<<"id: "<<id<<endl;
    }

    void setPass(string password){
        this->password=password;
    }

    string getPass(){
        return password;
    }
};

int main(){
    User u1(123);
    u1.username="aashisarbhai";
    u1.setPass("aashi");

    cout<<"username: "<<u1.username<<endl;
    cout<<"password: "<<u1.getPass()<<endl;

    return 0;
}