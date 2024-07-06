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
            unordered_map<char,int> m;
            for(int i=l-1;i<r;i++){
                m[s[i]]++;
            }
            bool b=false;
            for(auto& pr: m){
                if(pr.second%2!=0){
                    cout<<"NO"<<endl;
                    b=true;
                    break;
                }
            }
            if(!b)cout<<"YES"<<endl;
        }
    }
}