// #include<bits/stdc++.h>
// using namespace std;

// int solve(vector<int>& v, int n, int x, int sum[]) {
//     int count = 0;
//     for (int l = 0; l < n; l++) {
//         for (int r = l; r < n; r++) {
//             if ((sum[r+1] - sum[l]) != x) {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int n, x;
//         cin >> n >> x;
//         vector<int> v(n);
//         int sum[n + 1]; 
//         sum[0] = 0;

//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//             sum[i + 1] = sum[i] + v[i];
//         }

//         cout << solve(v, n, x, sum) << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int count_valid_subsegments(vector<int>& v, int n, int x) {
    int count = 0;
    for (int l = 0; l < n; ++l) {
        int g = 0; 
        for (int r = l; r < n; ++r) {
            g += v[r];
            if (g > x) {
                g = 0; 
            }
            if (g != 0) { 
                ++count;
            }
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        cout << count_valid_subsegments(v, n, x) << endl;
    }
    return 0;
}
