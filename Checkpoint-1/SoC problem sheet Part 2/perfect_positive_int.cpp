#include<iostream>
using namespace std;

bool isPerfect(long long n){
    int sum=0;
    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }
    return sum==10;
}

int main(){
    int n;
    cin>>n;
    int count=0;
    long long i=18;
    while(true){
        if(isPerfect(i))
        count++;
        if(count==n)
        break;
        else i++;
    }
    cout<<i;
}