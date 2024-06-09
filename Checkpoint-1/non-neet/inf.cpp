#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
#define ll long long
#define MOD 1000000007

void solve(ll b) {
 int i=0;
 short int a[1000001];

 while(i<1000001){
 if (i%4==0)a[i]=1;
 else a[i]=2;
 i++;
 }
 for(int j=0;j<b;j++)
 cout<<a[j]<<" ";

 cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int no_of_testcases;
    cin >> no_of_testcases;
    vector<ll>vp;

    while (no_of_testcases--) {
        ll a;
        cin >> a;
        vp.push_back(a);
    }
    for (size_t i = 0; i < vp.size(); i++) {
        solve(vp[i]);
    }
}

