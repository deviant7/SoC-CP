#include<iostream>
#include<vector>
using namespace std;

bool Valid(vector<vector<int> > &v){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            int sum=0;
            sum+=v[i][j]+v[i+1][j]+
            v[i][j+1]+v[i+1][j+1];
            if(sum==0 ||sum==1 ||sum==3 ||sum==4)
            return true;
        }
    }
    return false;
}

int main(){
    vector<vector<int> > v(4,vector<int>(4));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            char c;
            cin>>c;
            if(c=='#')
            v[i][j]=1;
            else v[i][j]=0;
        }
    }
    cout<<(Valid(v)? "YES" : "NO");
}