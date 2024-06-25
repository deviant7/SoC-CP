#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n!=1 && n!=2){
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxlen=2;
    for(int i=2;i<n;i++){
        int len=2;
        while(a[i]==a[i-1]+a[i-2]&&i<n){
            len++;
            i++;
        }
        maxlen=max(len,maxlen);
    }
    cout<<maxlen;
    }
    else cout<<n;
}
