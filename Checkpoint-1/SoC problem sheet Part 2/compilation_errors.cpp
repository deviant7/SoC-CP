#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<long long,int> m1,m2,m3;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        m1[a]++;
    }
    for(int i=0;i<n-1;i++){
        long long a;
        cin>>a;
        m2[a]++;
    }
    for(int i=0;i<n-2;i++){
        long long a;
        cin>>a;
        m3[a]++;
    }
    for(auto &pr :m1){
        if(m1[pr.first]-m2[pr.first]==1){
        cout<<pr.first<<endl;
        break;}
    }
    for(auto &pr :m2){
        if(m2[pr.first]-m3[pr.first]==1){
        cout<<pr.first<<endl;
        break;}
    }
}