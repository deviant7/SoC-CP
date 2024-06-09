#include<iostream>
using namespace std;

/*int Bsearch(int x, int a[], int start, int size){
    if(size==1) return start;

    int half=size/2;
        if(x<a[start+half])
            return Bsearch(x,a,start,half);
    else    return Bsearch(x,a,start+half,size-half);
}

  void jump(int a[],int p,int s){
   for(int q=s;q>p+1;q--)
   a[q]=a[q-1];}


void merger(int u[],int r,int v[],int s,int a[]){
int n=r+s;

for(int i=0;i<r;i++){
 a[i]=u[i];}
 for(int i=r;i<n;i++){
 a[i]=v[i-r];}

int p=-1;
 for(int i=r;i<n;i++){
 p=Bsearch(a[i],a,p+1,i-p-1);
 int k=a[i];
 jump(a,p,i);
 a[p+1]=k;
 }
}*/
void merger(int u[],int r,int v[],int s,int a[],int &n){
int i=0,j=0,k=0;
     for(k=0;i<r&&j<s;k++){
     if(u[i]<v[j]){a[k]=u[i];i++;}
     else if(u[i]>v[j]){a[k]=v[j];j++;}
     else{a[k]=u[i];i++;j++;n--;};
     }
     if(i<r){while(i<r){a[k]=u[i];i++;k++;}};
     if(j<s){while(j<s){a[k]=v[j];j++;k++;}};
}

int main(){

  int u[4]={1,4,5,7},v[8]={2,4,6,8,10,11,12,14};
  int n=4+8,a[n];
  merger(u,4,v,8,a,n);
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
 }


























