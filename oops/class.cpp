#include<iostream>
#include<string>
using namespace std;

class Student{
    //properties
    string name;
    float cgpa;

    //methods
 public:
    void getPercentage(){
        cout<<(cgpa*10)<<"%"<<endl;
    }

    //setters
    void setName(string nameVal){
        name=nameVal;
    }

    void setcgpa(float cgpaVal){
        cgpa=cgpaVal;
    }

    //getters
    string getName(){
        return name;
    }

    float getcgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;        //object
    //s1.name="aashi";
    //cout<<s1.name<<endl;
    // s1.cgpa=9;
    // cout<<s1.cgpa<<endl;
    // s1.getPercentage();

    s1.setName("aashi");
    s1.setcgpa(9.2);

    cout<<s1.getName()<<endl;
    cout<<s1.getcgpa()<<endl;
    return 0;
}