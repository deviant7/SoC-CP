#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    map<int,multiset<string> > mp;//could use map<int,multiset<string>,greater<int> > to store the map keys in descending order

    for(int i=0;i<N;i++){
        string name;
        int marks;
        cin>> name>> marks;
        mp[marks].insert(name);
    }
    for(auto it=(--mp.end());it!=(--mp.begin());--it){
        auto &pr=*it;
        for(auto &s : pr.second)
        cout<<s<<" "<<pr.first<<endl;
    }

}