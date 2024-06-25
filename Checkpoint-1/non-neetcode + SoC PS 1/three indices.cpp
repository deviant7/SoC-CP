#include<iostream>
#include<vector>
using namespace std;

bool left_check(const vector<int>&p,unsigned int index,int &left_index){
 for(int i=index-1;i>=0;i--)
 if(p[i]<p[index]){left_index=i;
 return true;}
 return false;
 }

bool right_check(const vector<int>&p,unsigned int index,int &right_index){
 for(size_t i=index+1;i<p.size();i++)
 if(p[i]<p[index]){right_index=i;
 return true;}
 return false;
 }

void check(const vector<int>&p){
 int n=p.size();
 int i,j;
 for(int k=1;k<n-1;k++){
 if(left_check(p,k,i)&&right_check(p,k,j)){
 cout<<"YES"<<endl<<i+1<<" "<<k+1<<" "<<j+1<<endl;return;}}
 cout<<"NO"<<endl;
}




int main(){

 int no_of_testcases;
 cin>> no_of_testcases;

 vector<vector<int> > v(no_of_testcases);
 int sizes[no_of_testcases];

 for(int k=0;k<no_of_testcases;k++){
    cin>>sizes[k];

         for(int i=0;i<sizes[k];i++){
            int a;cin>>a;
            v[k].push_back(a);
         }
 }
for(int j=0;j<no_of_testcases;j++)
check(v[j]);
 }

















