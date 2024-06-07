#include<iostream>
#include<string>
#include<vector>
using namespace std;

void lexicographically_smallest(int t){
 int n=min(t,26);
 for(int i=1;i<=n;i++){
 for(int j=i;j<=n;j++){
 for(int k=j;k<=n;k++){

 if(i+j+k==t){
 char a,b,c;
 a='a'-1+i;
 b='a'-1+j;
 c='a'-1+k;
 cout<<a<<b<<c<<endl;
 return;
}}}}}

int main(){

 int no_of_testcases;
 cin>> no_of_testcases;

 vector<int> v(no_of_testcases);
 for(int i=0;i<no_of_testcases;i++)
 cin>> v[i];

 for(int i=0;i<no_of_testcases;i++)
 lexicographically_smallest(v[i]);
}
