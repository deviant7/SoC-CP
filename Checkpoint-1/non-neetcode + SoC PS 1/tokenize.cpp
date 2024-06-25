#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> q{"neet","code","loves","you"},v;
    string p="";
       for(auto t:q)
       p+=(t+"-");
       cout<<p<<endl;
       vector<char> p1(p.begin(),p.end());
       char* s=p1.data();
       cout<<s<<endl;
    
    char* tok=strtok(s,"-");
    while(tok!=NULL){
        cout<<tok<<endl;
        v.push_back(tok);
        tok=strtok(NULL,"-");
    }
    cout<<endl;
    for(auto s:v)
    cout<<s<<endl;
}
