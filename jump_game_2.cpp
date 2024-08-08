#include<iostream>
#include<vector>
using namespace std;

void minSteps(vector<int> &steps, int &count, size_t index){
    if(index==1)return;

    for(int i=0;i<index-1;i++){
        if(i+steps[i]>=index-1){
            count++;
            minSteps(steps,count,i+1);
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> steps(n);
    for(int i=0;i<n;i++){
        cin>>steps[i];
    }
    int count=0;
    minSteps(steps,count,n);
    cout<<count;
}