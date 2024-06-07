#include<iostream>
using namespace std;

int maxindex(int a[], int length){
 int maxi=0;
 for(int i=1;i<length;i++)
 if(a[maxi]<a[i])maxi=i;
 return maxi;
}

void selsort(int a[], int n){
 if(n==0) return;
 int temp= maxindex(a,n),temp1=a[n-1];
 a[n-1]=a[temp];
 a[temp]=temp1;
 selsort(a,n-1);
}

int main(){
int n; cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
selsort(a,n);
for(int i=0;i<n;i++)
cout<<a[i]<<' ';
}
