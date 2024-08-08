#include<bits/stdc++.h>
using namespace std;

void solve(string &s,int n){
    if(n%2!=0){cout<<"NO"<<"\n"; return;}
    if(s=="NS" || s=="SN" ||s=="EW"||s=="WE"){
    cout<<"NO"<<"\n"; return;}

    int ver=0,hor=0,N=0,S=0,E=0,W=0;
    for(auto &ch:s){
        switch(ch){
            case 'N' :N++;
            break;
            case 'S' :S++;
            break;
            case 'E' :E++;
            break;
            case 'W' :W++;
            break;
        }
    }
    hor = E-W; ver = N-S;
    if(abs(hor)%2==0 && abs(ver)%2==0){

    string p(n, ' ');
    int Nr = N / 2, Sr = S / 2, Er = E / 2, Wr = W / 2;

    for (int i = 0; i < n; i++) {
        switch (s[i]) {
            case 'N':
                if (Nr > 0) {
                    p[i] = 'R';
                    Nr--;
                } else {
                    p[i] = 'H';
                }
                break;
            case 'S':
                if (Sr > 0) {
                    p[i] = 'R';
                    Sr--;
                } else {
                    p[i] = 'H';
                }
                break;
            case 'E':
                if (Er > 0) {
                    p[i] = 'R';
                    Er--;
                } else {
                    p[i] = 'H';
                }
                break;
            case 'W':
                if (Wr > 0) {
                    p[i] = 'R';
                    Wr--;
                } else {
                    p[i] = 'H';
                }
                break;
        }
    }
    
    cout<<p<<"\n";
    }
    else cout<<"NO"<<"\n";
    return;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(s,n);
    }
}