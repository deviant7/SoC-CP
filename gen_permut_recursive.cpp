#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > v;
vector<int> permut;
const int N=1e5;
int n;
bool chosen[N];

void permute(){
    if(permut.size()==n){
        v.push_back(permut);
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(chosen[i]) continue;
            chosen[i]=true;
            permut.push_back(i);
            permute();
            chosen[i]=false;
            permut.pop_back();
        }
    }
}

int main(){
    cin>>n;
    permute();

    for(auto &v1: v){
        for(auto& k: v1){
            cout<<k;
        }
        cout<<endl;
    }
}




// using c++ stl function next_permutation(v.begin(),v.end());

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
    
//     vector<int> permutation;
//     for(int i=0;i<n;i++){
//         permutation.push_back(i);
//     }
//     do{
//         for(auto& k: permutation){
//             cout<<k;
//         }
//         cout<<"\n";
//     }
//     while(next_permutation(permutation.begin(),permutation.end()));
// }