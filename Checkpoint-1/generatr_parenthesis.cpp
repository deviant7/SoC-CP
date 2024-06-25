#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        unordered_map<char,int> m{{'(',1},{'{',2},{'[',3},{')',-1},{'}',-2},{']',-3}};
        stack<char> st;
        for(auto &ch: s){
            if(m[ch]>0){
                st.push(ch);
            }
            else{
                if(!st.empty() && m[ch]+m[st.top()]==0){
                    st.pop();
                }
                else return false;
            }
        }
        return st.empty();
}

void recurseparenthesis(vector<string> &v,int &n,string s=""){
    if(s.size()==2*n){
        if(isValid(s))v.push_back(s);
        return;
    }
    recurseparenthesis(v,n,s+"(");
    recurseparenthesis(v,n,s+")");
}
    
int main(){
    vector<string> v;
    int n; cin>>n;
    recurseparenthesis(v,n);
    for(auto &str: v){
        cout<<str<<" ";
    }
}
