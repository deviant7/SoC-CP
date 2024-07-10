#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,Q;
        cin>>N>>Q;
        string s;
        cin>>s;
        while(Q--){
            int l,r;
            cin>>l>>r;
            if(l==r) cout<<"yes"<<"\n";
            else{
            unordered_map<char,int> m;
            for(int i=l-1;i<r;i++){
                m[s[i]]++;
            }
            int count_odd=0;
            for(auto& pr: m){
                if(pr.second%2!=0)count_odd++;
            }
                if(count_odd<=1)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
}