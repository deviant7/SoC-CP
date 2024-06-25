#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
    queue<string> q;
    q.push("abhinav");
    q.push("raj");
    q.push("aviraj");
    q.push("anushka");

    while(!q.empty()){
        cout<<q.front()<<"\n";
        q.pop();
    }
}