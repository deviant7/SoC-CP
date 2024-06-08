/*given N strings and q queries 
in each query you are given a string 
print yes if string is present
else print no.*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_set<string> s;
    int N;
    cin>>N;
    while(N--){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str1;
        cin>>str1;
        if(s.count(str1)==1)
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}