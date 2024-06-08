#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        int K;
        cin>>N>>K;
        multiset<long int> s;
        for(int i=0;i<N;i++){
            long int Ai;
            cin>>Ai;
            s.insert(Ai);
        }

    long long ans=0;

    for(int j=0;j<K;j++){
        auto it=s.end();
        --it;
        ans+=(*it);
        long int temp=(*it);
        s.erase(it);
        s.insert(temp/2);
    }
cout<<ans<<endl;
}
}