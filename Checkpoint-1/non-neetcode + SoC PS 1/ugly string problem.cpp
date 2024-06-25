#include<iostream>
#include<string>
#include<vector>
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
}}


int main(){

 int no_of_testcases;
 cin>> no_of_testcases;

 vector<string> v;

 for(int k=0;k<no_of_testcases;k++){
    int sizes;
    cin>>sizes;
    string s;
    cin>>s;
    v.push_back(s);
 }
 for(int k=0;k<no_of_testcases;k++){

   cout<<how_many_times(v[k],"pie")+
         how_many_times(v[k],"map")-
         how_many_times(v[k],"mapie")<<endl;

}
}



