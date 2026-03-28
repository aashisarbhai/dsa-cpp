// #include<iostream>
// using namespace std;

// class A{
//     private:
//         string secret="secret data";
//         friend class B;
//         friend void revealSecret(A &obj);
// };

// class B{  //becomes a friend class of A
//     public:
//         void showSecret(A &obj){
//             cout<<obj.secret<<endl;
//         }
// };

// void revealSecret(A &obj){
//     cout<<obj.secret<<endl;
// }

// int main(){
//     A a;
//     B b;
//     //b.showSecret(a);
//     revealSecret(a);

//     return 0;
// }



















#include<iostream>
using namespace std;

class A{
    private:
        string secret="secret data";
        friend class B;
        friend void reveal(A &obj);
};

class B{
    public:
        void showSecret(A &obj){
            cout<<obj.secret<<endl;
        }
};

void reveal(A &obj){
    cout<<obj.secret<<endl;
}

int main(){
    A a1;
    B b1;
    b1.showSecret(a1);
    reveal(a1);

    return 0;
}