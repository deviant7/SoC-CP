#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

long long maximize_c(int n, const vector<int>& a) {
    long long dp_pos = 0; // Max positive value of c
    long long dp_neg = 0; // Max negative value of c
    
    for (int i = 0; i < n; ++i) {
        long long new_pos = max(dp_pos + a[i], abs(dp_pos + a[i]));
        long long new_neg = max(dp_neg + a[i], abs(dp_neg + a[i]));
        
        dp_pos = max(new_pos, new_neg);
        dp_neg = min(dp_pos, dp_neg + a[i]); // track minimum negative value to ensure correctness
    }
    
    return dp_pos;
}

int main() {
    int t;
    cin >> t;
    vector<long long> results;
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        results.push_back(maximize_c(n, a));
    }
    
    for (const auto& result : results) {
        cout << result << endl;
    }
    
    return 0;
}




