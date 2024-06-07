#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){

 pair<int,string> p;
 p.first=56;
 p.second="india";
 cout<<p.first<<":"<<p.second<<endl;

 //make_pair( , ) returns a pair, so this can be assigned to a pair object;
 pair<int,double> p1,p2;
 p1=make_pair(3,45.6);
 cout<<p1.first<<":"<<p1.second<<endl;;
 //or pair<int,double> p1 = make_pair(3,45.6);

 //another way to initialize
 p2={3,67};

 //
pair<int,string> p3=p;
cout<<p3.first<<":"<<p3.second<<endl;

cout<<endl;

char a[]={'a','b','c'};
string s[]={"abhinav","bhavesh","chandresh"};

vector<pair<char,string> >vp;
for(int i=0;i<3;i++)
vp.push_back({a[i],s[i]});

for(size_t i=0;i<vp.size();i++)
cout<<vp[i].first<<" : "<<vp[i].second<<endl;

swap(vp[2],vp[1]);
cout<<endl;

for(size_t i=0;i<vp.size();i++)
cout<<vp[i].first<<" : "<<vp[i].second<<endl;
}
