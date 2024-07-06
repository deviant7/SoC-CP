#include<iostream>
#include<map>
using namespace std;
#define M 1000000007

map<int,long long> m;

long long factorial(int n){
    auto it=m.lower_bound(n);//or m.find();
    if(it!=m.end()){
        return it->second;
    }
    else{
        long long ans=(--m.end())->second;
        for(int i=((--m.end())->first)+1; i<=n; i++){
        ans=(ans*i)%M;
        m[i]=ans;
        }
    return ans;
    }
}


int main(){
    m[0]=1;

    int Testcases;
    cin>>Testcases;

    while(Testcases--){
        cout<<factorial(Testcases)<<"\n";
    }
}
