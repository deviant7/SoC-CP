#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;

string to_strings(int a) {
    stringstream ss;
    ss << a;
    return ss.str();
}

int to_ints(const string &s) {
    stringstream ss(s);
    int a;
    ss >> a;
    return a;
}

string twelve_hour_format(const string &s, string &am_or_pm) {
    int hour = to_ints(s.substr(0, 2));
    int minute = to_ints(s.substr(3, 2));

    if (hour >= 12) {
        am_or_pm = "PM";
        if (hour > 12) hour -= 12;
    } else {
        am_or_pm = "AM";
        if (hour == 0) hour = 12;
    }

    stringstream ss;
    ss << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute;

    return ss.str();
}

int main() {
    int no_of_testcases;
    cin >> no_of_testcases;

    vector<string> times(no_of_testcases);
    for (int i = 0; i < no_of_testcases; i++) {
        cin >> times[i];
    }

    for (int i = 0; i < no_of_testcases; i++) {
        string am_or_pm = "AM";
        cout << twelve_hour_format(times[i], am_or_pm) << " " << am_or_pm << endl;
    }

    return 0;
}

