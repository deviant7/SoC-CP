#include<iostream>
#include<vector>
using namespace std;

void merger(int u[],int r,int v[],int s,int a[]){
int i=0,j=0,k=0;
     for(k=0;i<r&&j<s;k++){
     if(u[i]<=v[j]){a[k]=u[i];i++;}
     else if(u[i]>v[j]){a[k]=v[j];j++;}

     }
     if(i<r){while(i<r){a[k]=u[i];i++;k++;}};
     if(j<s){while(j<s){a[k]=v[j];j++;k++;}};
}

void mergesort(int a[],int n){

     if(n==1)return;

 int u[n/2],v[n-n/2];
 for(int i=0;i<n/2;i++){
 u[i]=a[i];}
 for(int i=0;i<n-n/2;i++){
 v[i]=a[i+n/2];}

 mergesort(u,n/2);
 mergesort(v,n-n/2);

 merger(u,n/2,v,n-n/2,a);
 }


int max_power_of(const vector<int>& v,int index=0){
if(index>=v.size())return 0;

 int k=index+1;
 int n=0;
 for(;k<v.size();k++){
 if(v[k]==0){while(v[k]==0){n++;k++;
 if(k>=v.size())break;}
 break;}
 }
 if(n>0){
 int a[k-n-index];
 for(int j=0;j<k-n-index;j++)a[j]=v[j+index];
 mergesort(a,k-n-index);

 int sum=0;
 for(int p=k-n-index-1;p>=k-2*n-index;p--){
 sum+=a[p];
 }

 return sum+max_power_of(v,k);
}
return 0;
}

int main(){

 int no_of_testcases;
 cin>> no_of_testcases;

 vector<vector<int> >v(no_of_testcases);

 for(int i=0;i<no_of_testcases;i++){
  int n;cin>>n;
  for(int k=0;k<n;k++){
   int a;cin>>a;
   v[i].push_back(a);
  }
 }
 for(int i=0;i<no_of_testcases;i++){
 while(v[i][0]==0){
 v[i].erase(v[i].begin());
 }
 cout<<max_power_of(v[i])<<endl;
}}
