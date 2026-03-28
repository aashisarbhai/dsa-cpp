// #include<iostream>
// using namespace std;

// class Complex{
//     private:
//         int real;
//         int imag;

//     public:
//         Complex(int real,int imag){
//             this->real=real;
//             this->imag=imag;
//         }

//         void showNum(){
//             cout<<real<<"+"<<imag<<"i"<<endl;
//         }

//         void operator +(Complex &c2){
//             int resReal=this->real+c2.real;
//             int resImag=this->imag+c2.imag;
//             Complex c3(resReal,resImag);
//             cout<<"res: ";
//             c3.showNum();
//         }
// };

// int main(){
//     Complex c1(1,2);
//     Complex c2(3,4);

//     c1.showNum();
//     c2.showNum();
//     c1+c2;

//     return 0;
// }

#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;

    public:
        Complex(int real,int imag){
            this->real=real;
            this->imag=imag;
        }

        void showNum(){
            cout<<real<<"-"<<imag<<"i"<<endl;
        }

        void operator -(Complex &c2){
            int resReal=this->real-c2.real;
            int resImag=this->imag-c2.imag;
            Complex c3(resReal,resImag);
            c3.showNum();
        }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    c1-c2;

    return 0;
}