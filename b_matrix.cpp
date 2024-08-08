#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
         if(n == 1 && m == 1) {
            cout << -1 << endl;
            continue;
        }
        vector<vector<int>> b(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for(int j = 0; j < m; j++) {
                b[n - i - 1][j] = a[i][j];
            }
        }
        if(n % 2 != 0) {
            for (int i = 0; i < m; ++i) {
                b[n / 2][i] = a[n / 2][m - i - 1];
            }
            if(m % 2 != 0) {
                b[n / 2][m / 2] = a[n / 2][m / 2 - 1];
                b[n / 2][m / 2 + 1] = a[n / 2][m / 2];
            }
        }
        for (int i = 0; i < n; ++i) {
            for(int j = 0; j < m; j++) {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
