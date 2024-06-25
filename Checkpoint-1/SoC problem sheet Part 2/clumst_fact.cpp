#include<bits/stdc++.h>
using namespace std;


    int clumsy(int k) {
    if(k==1)return 1;
      vector<int> answers;
      int n=k;
      int i=1;
      int ans=n;
      while(--n){
        if(i%4==1){
            ans*=n;
        }else
        if(i%4==2){
            ans/=n;
        }else
        if(i%4==3){
            ans-=n;
        }else{
            answers.push_back(ans);
            ans=n;
        }
        i++;
        if(i==k){
            answers.push_back(ans);
        }
    }
    int sum=answers[0];
    size_t j=1;
    while(j<answers.size()){
        sum-=answers[j];
        j++;
    }
    return sum+(2*(k-3));
    }

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<clumsy(n)<<"\n";
    }
}