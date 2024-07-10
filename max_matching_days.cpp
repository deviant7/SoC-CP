#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int> > v;
    int i;
    cin>>i;
    vector<int> v1;
    v1.push_back(i);
    while(cin>>i){
        if(i>*(--v1.end()))
        v1.push_back(i);
        else{
            v.push_back(v1);
            if(v.size()==n)break;
            v1.clear();
            v1.push_back(i);
        }
    }
    for(auto& v2:v){
        for(auto & n: v2){
            cout<<n<<" ";
        }
        cout<<endl;
    }
}