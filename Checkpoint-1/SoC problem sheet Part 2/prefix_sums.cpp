#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    long long sum[n+1];
    sum[0]=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum[i+1]=sum[i]+a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int L,R;
        cin>>L>>R;
        cout<<sum[R]-sum[L-1]<<endl;
    }
}