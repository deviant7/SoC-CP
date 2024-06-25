#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isBalanced(string &str){
    if(str.size()==0)return true;
    stack<char> s;

    for(auto& c:str){
        if(c=='('){
            s.push(c);
        }
        else{
             if(!s.empty() && s.top()=='('){
                s.pop();
             }
             else return false;
        }        
    }
    return s.empty();
}

int main(){
    string s;
    cin>>s;
    cout<<(isBalanced(s)? "Balanced":"Unbalanced");
}