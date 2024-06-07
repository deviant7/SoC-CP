#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_power_of(const vector<int>& v) {
    int max_power = 0;
    int current_power = 0;
    bool in_sequence = false;

    for (int power : v) {
        if (power == 0) {
            if (in_sequence) {
                max_power += current_power;
                current_power = 0;
                in_sequence = false;
            }
        } else {
            current_power += power;
            in_sequence = true;
        }
    }

    if (in_sequence) {
        max_power += current_power;
    }

    return max_power;
}

int main() {
    int no_of_testcases;
    cin >> no_of_testcases;

    for (int i = 0; i < no_of_testcases; i++) {
        int n;
        cin >> n;
        vector<int> powers(n);
        for (int k = 0; k < n; k++) {
            cin >> powers[k];
        }
        cout << max_power_of(powers) << endl;
    }

    return 0;
}
