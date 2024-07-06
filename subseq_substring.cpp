// #include<bits/stdc++.h>
// using namespace std;

// void solve(string& a, string& b){
//     vector<string> substrs;
//     for(int i=0;i<a.size();i++){
//         for(int j=1;j<=a.size()-i;j++){
//             substrs.push_back(a.substr(i,j));
//         }
//     }
//     vector<int> lengths;
//     for(auto& s: substrs){
//         size_t found=b.find(s);
//         if(found!=string::npos){
//             lengths.push_back(s.size());
//         }
//     }
//     int maxLength = lengths.empty() ? 0 : *max_element(lengths.begin(),lengths.end());
//     cout << b.size() + a.size() - maxLength << endl;
// }

// int main(){
//     int T;
//     cin >> T;
//     while(T--){
//         string a,b;
//         cin >> a >> b;
//         solve(a,b);
//     }
// }
#include<bits/stdc++.h>
using namespace std;

// Function to generate all non-contiguous substrings (subsequences) of a string
void generateSubsequences(string& s, vector<string>& subsequences) {
    int n = s.size();
    int numOfSubsequences = 1 << n; // 2^n subsequences

    for(int i = 1; i < numOfSubsequences; i++) {
        string subseq = "";
        for(int j = 0; j < n; j++) {
            if(i & (1 << j)) {
                subseq += s[j];
            }
        }
        subsequences.push_back(subseq);
    }
}

void solve(string& a, string& b){
    vector<string> subsequencesA;
    generateSubsequences(a, subsequencesA);

    int maxLength = 0;
    for(auto& subseq : subsequencesA){
        if(b.find(subseq) != string::npos){
            maxLength = max(maxLength, (int)subseq.size());
        }
    }
    cout << a.size() + b.size() - maxLength << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        string a,b;
        cin >> a >> b;
        solve(a,b);
    }
}

