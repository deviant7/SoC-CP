#include<bits/stdc++.h>
using namespace std;

int GCD(int m,int n){
    if(m%n==0) return n;
    else return GCD(n,m%n);
}

int main(){
    int T;
     cin>>T;
     while(T--){
        int N,Q;
        cin>>N>>Q;
        int A[N+1];
        cin>>A[1];
        int gcd_f[N+1];
        gcd_f[1]=A[1];
        for(int i=2;i<N+1;i++){
            cin>>A[i];
            gcd_f[i]=GCD(gcd_f[i-1],A[i]);
        }
        int gcd_b[N+1];
        gcd_b[N]=A[N];
        for(int i=N-1;i>0;i--){
            gcd_b[i]=GCD(gcd_b[i+1],A[i]);
        }
        while(Q--){
            int L,R;
            cin>>L>>R;
            cout<<GCD(gcd_f[L-1],gcd_b[R+1])<<"\n";
        }
     }
}