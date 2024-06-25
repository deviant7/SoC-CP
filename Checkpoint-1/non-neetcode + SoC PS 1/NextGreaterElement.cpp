#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

// void NGE(vector<int>&v){
//     stack<int> s;
//     unordered_map<int,int> m;
//     s.push(v[0]);
//     for(int i=1;i<v.size();i++){
//         if(v[i]>s.top()){
//             while(!s.empty() && v[i]>s.top() ){
//                 m.insert({s.top(),v[i]});
//                 s.pop();
//             }
//         }
//         s.push(v[i]); 
//     }
//     while(!s.empty()){
//         m.insert({s.top(),-1});
//         s.pop();
//     }
//     for(auto& n:v)
//     cout<<n<<" "<<m[n]<<"\n";
// }

void NGE(vector<int>&v){
    stack<int> s;
    unordered_map<int,int> m;
    s.push(0);
    for(int i=1;i<v.size();i++){
        if(v[i]>v[s.top()]){
            while(!s.empty() && v[i]>v[s.top()] ){
                m.insert({s.top(),v[i]});
                s.pop();
            }
        }
        s.push(i); 
    }
    while(!s.empty()){
        m.insert({s.top(),-1});
        s.pop();
    }
     for(int i=0;i<v.size();i++){
    cout<<v[i]<<" "<<m[i]<<"\n";
}
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    NGE(v);
}