// #include <iostream>
// #include <string>
// #include <stack>

// using namespace std;

// bool isBalanced(string &str) {
//     stack<char> s;
//     for (auto& c : str) {
//         if (c == '(') {
//             s.push(c);
//         } else {
//             if (!s.empty() && s.top() == '(') {
//                 s.pop();
//             } else {
//                 return false;
//             }
//         }
//     }
//     return s.empty();
// }

// bool RBS(string s, int index = 0) {
//     if (index == s.size()) {
//         return isBalanced(s);
//     }
//     if (s[index] == '?') {
//         s[index] = '(';
//         if (RBS(s, index + 1)) return true;
//         s[index] = ')';
//         if (RBS(s, index + 1)) return true;
//         return false;
//     }
//     return RBS(s, index + 1);
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         cout << (RBS(s) ? "YES" : "NO") << "\n";
//     }
//     return 0;
// }

//DP APPROACH
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool RBS(string &s) {
    int n = s.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
    dp[0][0] = true;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (!dp[i][j]) continue;
            if (s[i] == '(') {
                if (j + 1 <= n) dp[i + 1][j + 1] = true;
            } else if (s[i] == ')') {
                if (j > 0) dp[i + 1][j - 1] = true;
            } else { // s[i] == '?'
                if (j + 1 <= n) dp[i + 1][j + 1] = true;
                if (j > 0) dp[i + 1][j - 1] = true;
            }
        }
    }
    return dp[n][0];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (RBS(s) ? "YES" : "NO") << "\n";
    }
    return 0;
}