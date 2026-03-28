#include<iostream>
using namespace std;

// class Complex{
//     public:
//         int real;
//         int imag;

//         Complex(int real,int imag){
//             this->real=real;
//             this->imag=imag;
//         }

//         void showNum(){
//             cout<<real<<"+"<<imag<<"i";
//         }

//         void operator -(Complex &obj){
//             int resReal=this->real-obj.real;
//             int resImag=this->imag-obj.imag;
//             Complex c3(resReal,resImag);
//             c3.showNum();
//         }
// };

// class BankAccount{
//     private:
//         int accNum;
//         int balance;
    
//     public:

//         BankAccount(int accNum,int balance){
//             this->accNum=accNum;
//             this->balance=balance;
//         }

//         void deposit(int num){
//             balance+=num;
//             cout<<"deposit: "<<num<<endl;
//         }

//         void withdraw(int num){
//             balance-=num;
//             cout<<"withdraw: "<<num<<endl;
//         }

//         void currBalance(){
//             cout<<"balance: "<<balance<<endl;
//         }
// };

class Parent{
    public:
        string name;
        int age;
};

class Student: public Parent{
    public:
        string studentId;

        Student(string name,int age,string studentId){
            this->name=name;
            this->age=age;
            this->studentId=studentId;
        }

        void displayStudentInfo(){
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"student id: "<<studentId<<endl;
        }
};

int main(){
    // Complex c1(2,3);
    // Complex c2(1,2);
    // c1-c2;

    // BankAccount ba1(1,5000);
    // ba1.currBalance();
    // ba1.deposit(2500);
    // ba1.withdraw(500);
    // ba1.currBalance();

    Student student("Alice",20,"S12345");
    student.displayStudentInfo();

    return 0;
}