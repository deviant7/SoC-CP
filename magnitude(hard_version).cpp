#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    int T;
    cin>>T;
    int n;

    while(T--){
        cin>>n;
        vector<int> v(n);
        long long sum=0;

        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool all_positive=all_of(v.begin(),v.end(),[](int a){return a>=0;});
        bool all_negative=all_of(v.begin(),v.end(),[](int a){return a<=0;});

        if(all_positive){
            cout<<accumulate(v.begin(),v.end(),0)<<"\n";
        }
        else if(all_negative){
            cout<<accumulate(v.begin(),v.end(),0,std::minus<int>())<<"\n";
        }
        else{
            for(int i=0;i<n-1;i++){
                if(sum+v[i]<0 && v[i+1]>=0){
                    sum=abs(sum+v[i]);
                }else{
                    sum=sum+v[i];
                }
            }
            sum=abs(sum+v[n-1]);
            cout<<sum<<"\n";
        }
    }
}