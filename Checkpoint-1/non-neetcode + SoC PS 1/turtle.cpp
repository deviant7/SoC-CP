#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    set<long long> used; // Use long long to handle large product values

    // Initialize with alternating 2 and 3
    for (int i = 0; i < n; i++) {
      a[i] = (i % 2 == 0) ? 2 : 3;
    }

    // Check for violations and adjust
    for (int i = 0; i < n; i++) {
      long long product = a[i] * a[i]; // Square of current element
      for (int j = 0; j < i; j++) {
        if (used.count(a[j] * a[i])) {
          // Violation found, change current element
          a[i] = (a[i] == 2) ? 3 : 2;
          product = a[i] * a[i]; // Update product after change
          break;
        }
      }
      used.insert(product);
    }

    // Print the sequence
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
