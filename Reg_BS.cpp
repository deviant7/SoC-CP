#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isBalanced(string &str) {
    stack<char> s;
    for (auto& c : str) {
        if (c == '(') {
            s.push(c);
        } else {
            if (!s.empty() && s.top() == '(') {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

bool RBS(string &s, int index = 0) {
    if (index == s.size()) {
        return isBalanced(s);
    }
    if (s[index] == '?') {
        s[index] = '(';
        if (RBS(s, index + 1)) return true;
        s[index] = ')';
        if (RBS(s, index + 1)) return true;
        s[index] = '?';
        return false;
    }
    return RBS(s, index + 1);
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