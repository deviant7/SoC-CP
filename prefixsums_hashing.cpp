#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int main(){
//     int n,m;
//     cin >> n >> m;

//     vector<long long> v(n,0);
//     while(m--){
//         int a,b,k;
//         cin >> a >> b >> k;
//         for(int i = a-1; i < b; i++){
//             v[i] += k;
//         }
//     }

//     cout << *max_element(v.begin(), v.end()) << endl;
// }

int main(){
    int n, m;
    cin >> n >> m;

    vector<long long int> v(n + 1, 0);
    while (m--) {
        int a, b, k;
        cin >> a >> b >> k;
        v[a] += k;
        if (b + 1 <= n) {
            v[b + 1] -= k;
        }
    }
    
    vector<long long int> pfs(n + 1, 0); 
    for (int i = 1; i <= n; ++i) {
        pfs[i] = pfs[i - 1] + v[i];
    }

    cout << *max_element(pfs.begin(), pfs.end()) << endl;

}