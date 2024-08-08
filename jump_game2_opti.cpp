#include<iostream>
#include<vector>
using namespace std;

int minJumps(vector<int> &steps){
    if(steps.size()<=1)return 0;

    int jumps=0;
    int farthest=0;
    int current=0;

    for(int i=0;i<steps.size()-1;i++){
        farthest= max(farthest,i+steps[i]);
        if(i==current){
            current=farthest;
            jumps++;
            if(current>=steps.size()-1)break;
        }
    }
    return jumps;
}
int main(){
    int n;
    cin>>n;
    vector<int> steps(n);
    for(int i=0;i<n;i++){
        cin>>steps[i];
    }
    cout<<minJumps(steps);
}