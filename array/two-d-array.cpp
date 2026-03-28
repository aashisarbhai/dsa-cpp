#include<iostream>
using namespace std;

void print(int student[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<student[i][j]<<" ";
        }
        cout<<endl;
    }
}

void input(int arr[3][3]){
    cout<<"enter the elements";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    print(arr);
}

int main(){
    int student[3][3]={ {10,90,70},
                        {85,74,89},
                        {63,72,66}};
    int arr[3][3];
    input(arr);                    

    return 0;
}