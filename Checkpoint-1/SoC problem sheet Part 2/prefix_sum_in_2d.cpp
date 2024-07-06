#include<iostream>
using namespace std;
const int n=100;
int a[n][n];
long long sum[n][n];

int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin>>a[i][j];
            sum[i][j]=sum[i][j-1]+a[i][j];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long ans=0;
        for(int row=a;row<=c;row++){
            ans+=sum[row][d]-sum[row][b-1];
        }
        cout<<ans<<endl;
    }
}