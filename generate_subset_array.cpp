#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int> dummy;

void search(int k,int arr[]){
    if(k==n){
        for(auto a:dummy)
        cout<<a;
        cout<<endl;
        return;
    }
    search(k+1,arr);
    dummy.push_back(arr[k]);
    search(k+1,arr);
    dummy.pop_back();
}

int main(){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    search(0,arr);
}