#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    int num=40;
    s.push(num/4);

    s.pop();
    s.pop();

    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }

}