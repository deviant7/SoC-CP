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
//another way
/*
#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool comp( pair<string,int> a, pair<string,int> b){
	if(a.second==b.second){
		return(a.first<b.first);
	}
	else return a.second>b.second;
}

int main() {
	int n;
	cin>>n;
	vector<pair<string,int> > vp;

	while(n--){
		string s;
		int a;
		cin>>s>>a;
		vp.push_back({s,a});
	}
	sort(vp.begin(),vp.end(),comp);
	for(auto& pr: vp ){
		cout<<pr.first<<" "<<pr.second<<"\n";
	}
}
*/
