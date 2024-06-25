#include<iostream>
using namespace std;

long long gif(long long d, long long x){
    if(d%x!=0)
    return d/x +1;
    else 
    return d/x;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,d;
        cin>>n>>d;
        bool b=false;
        long long x=0;
        while(x<n){
            if(x+gif(d,x+1)<=n){
                b=true;
                break;
            }
            x++;
        }
        cout<<(b? "YES" : "NO")<<endl;

    }
}