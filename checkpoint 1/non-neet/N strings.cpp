#include<iostream>
#include<map>
using namespace std;

int main(){

 int N;
 cin>>N;
 map<string,int> m;

 while(N--){
  string s;
  cin>>s;
  if(m.find(s)==m.end())
  {
  m.insert({s,1});
  }
  else m[s]++;
 }
cout<<endl;

 for(auto &mi : m)
 cout<<mi.first<<" "<<mi.second<<endl;
}

 /*while(N--){
  string s;
  cin>>s;                 //much easier
  m[s]++;}
  */
