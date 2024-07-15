#include<iostream>
using namespace std;
int n=4,count=0;
int column[4];
int diag1[7];
int diag2[7];

void search(int y){
    if(y==n){count++;
    return;}

    for(int x=0;x<n;x++){
        if(column[x] || diag1[x+y] || diag2[x-y+n-1])
        continue;

        column[x]=diag1[x+y]=diag2[x-y+n-1]=1;
        search(y+1);
        column[x]=diag1[x+y]=diag2[x-y+n-1]=0;
    }
}

int main(){
    int y=0;
    search(y);
    cout<<count;
}