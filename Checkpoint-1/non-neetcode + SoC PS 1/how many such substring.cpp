#include<iostream>
#include<string>
using namespace std;

int how_many_times(const string &s,string p){
 if(s.find(p)==string::npos) return 0;
 else{
 int n;
 size_t i=s.find(p);

 for(n=0;i!=string::npos;n++){
 i=s.find(p,i+3);
 }
 return n;
}
}

int main(){
 string s="apple";
 cout<<how_many_times(s,"pie");
}
