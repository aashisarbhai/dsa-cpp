#include <iostream>
using namespace std;

int main(){
    int n=4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=n;j>=i;j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // char ch='A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     cout<<"* ";
    //     for(int j=1;j<=n-1;j++){
    //         if(i==1||i==n){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<"*";
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     //spaces
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }

    //     //stars
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //}

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int ele=1;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<ele<<" ";
    //         ele++;
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     //spaces
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"   ";
    //     }
    //     //stars
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=n;i>=1;i--){
    //     //spaces
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"   ";
    //     }
    //     //stars
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    //upper half
    for(int i=1;i<=n;i++){
        //stars 
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        //space
        for(int j=1;j<=2*(n-i);j++){
            cout<<"   ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    //lower half
    for(int i=n;i>=1;i--){
        //stars
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        //space
        for(int j=1;j<=2*(n-i);j++){
            cout<<"   ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}