#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

    // a[0][0]=(2*a[1][3]-a[2][1]+a[2][3])/2.0;
    // a[1][1]=a[0][0]+a[2][1]-a[2][3];
    // a[2][2]=a[0][0]+a[2][1]-a[3][2];

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
