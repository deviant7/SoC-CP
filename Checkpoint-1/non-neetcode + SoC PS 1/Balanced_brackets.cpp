#include<bits/stdc++.h>
using namespace std;

bool isBalanced(stack<char> &s){
    if(s.empty())return true;

     if(s.top()=='(')
     return false;
     else{
        int n=0;
        while(!s.empty() && s.top()==')'){
            n++;
            s.pop();
        }
        while(n--){
            if(!s.empty() && s.top()=='('){
                s.pop();
            }
            else return false;
        }
     }
     return isBalanced(s);
}  

int main(){
    int n;
    cin>>n;
    stack<char> brackets;
    while(n--){
        char c;
        cin>>c;
        brackets.push(c);
    }
    cout<<(isBalanced(brackets)? "Balanced":"Unbalanced");
}