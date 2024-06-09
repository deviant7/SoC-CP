#include<iostream>
using namespace std;

void triangle(int n){
    if(n%2==1){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(j>=n-i-1 && j<=n+i-1)
            if((j+i)%2==0)cout<<"*";
            else cout<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }}
    else if(n%2==0){
        for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(j>=n-i-1 && j<=n+i-1)
            if((j+i)%2==1)cout<<"*";
            else cout<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
    }
return;
}

int main(){
    int n;
    while(cin>>n)
    triangle(n);
}