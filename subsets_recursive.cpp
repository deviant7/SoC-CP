#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> >v;
vector<int> dummy;
int n;

void gen_subsets(int k){
    if(k==n){
        v.push_back(dummy);
        return;
    }
    else{
        gen_subsets(k+1);
        dummy.push_back(k);
        gen_subsets(k+1);
        dummy.pop_back();
    }
}

int main(){
    cin>>n;
    gen_subsets(0);
    for(auto &v1: v){
        for(auto& k: v1){
            cout<<k<<", ";
        }
        cout<<endl;
    }
}