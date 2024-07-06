#include<bits/stdc++.h>
using namespace std; 

int GCD(int m,int n){
    if(m%n==0) return n;
    else return GCD(n,m%n);
}

void solve(int a[],int n,int l, int r){
    int gcd;
    if(l==1){
    gcd=a[r];
    for(int i=r+1;i<n;i++){
        gcd=GCD(gcd,a[i]);
    }
    }else{
        gcd=a[0];
        for(int i=0;i<l-2;i++){
        gcd=GCD(gcd,a[i+1]);
        }
        for(int i=r;i<n;i++){
            gcd=GCD(gcd,a[i]);
        }
    }
    cout<<gcd;
    //how to make it faster
}

 int main(){
     int T;
     cin>>T;
     while(T--){
        int N,Q;
        cin>>N>>Q;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        while(Q--){
            int L,R;
            cin>>L>>R;
            solve(A,N,L,R);
        }
     }
 }