#include<iostream>
#include<vector>
using namespace std;

void two_greatest_divisors(int p,int&j,int&k){
 int i=p-1;
 j=-1;
 k=-1;
 for(;i>1;i--){
 if(p%i==0){k=i;break;}}

 for(int t=i-1;t>=1;t--){
 if(p%t==0){j=t;break;}}
 }

int the_number(const vector<int>& v){
 int i=2,j,k;
 while(true){
 two_greatest_divisors(i*v[1],j,k);
 if(j==v[0]&&k==v[1])return i*v[1];
 i++;
}
}

int main(){

 int no_of_testcases;
 cin>> no_of_testcases;

 vector<vector<int> > v(no_of_testcases);

 for(int i=0;i<no_of_testcases;i++){
 for(int k=0;k<2;k++){
 int n;
 cin>>n;
 v[i].push_back(n);
 }}
 for(int i=0;i<no_of_testcases;i++){
 cout<<the_number(v[i])<<endl;
}}
