#include <iostream>
#include <string>

using namespace std;

string maxXorValue(string x, int k) {
    string result = x;

    for (int i = 0; i < x.size(); ++i) {
        if (x[i] == '0' && k > 0) {
            result[i] = '1';
            --k;
        } else if (x[i] == '1') {
            result[i] = '0';
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        cin >> s;

        int k;
        cin >> k;

        string y = maxXorValue(s, k);

        cout << y << "\n";
    }

    return 0;
}
