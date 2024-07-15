#include<iostream>
#include<vector>
using namespace std;
int n;
vector<string> v;
string dummy="";
int open=0,closed=0;

//open>=closed;open,closed<=n

void search(){
    if(open<closed || open>n || closed>n)
    return;
    if(open+closed==2*n){
        v.push_back(dummy);
        return;
    }
    open++;
    dummy+="(";
    search();
    open--;
    dummy.pop_back();

    closed++;
    dummy+=")";
    search();
    closed--;
    dummy.pop_back();
}

int main(){
    while(cin>>n){
    search();
    for(auto &s:v){
        cout<<s<<" ";
    }
    cout<<endl;
    v.clear();
    }
}