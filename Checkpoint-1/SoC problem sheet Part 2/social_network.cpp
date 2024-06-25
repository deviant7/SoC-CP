#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    deque<int> q;
    while(n--){
        int id;
        cin>>id;
        auto it=find(q.begin(),q.end(),id);
        if(it==q.end()){
            if(q.size()==k){
                q.pop_front();
            }
            q.push_back(id);
        }
    }
    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.back()<<" ";
        q.pop_back();
    }
}