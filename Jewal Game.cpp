#include <iostream>
#include <stack>
using namespace std;

int maxJewelScore(string jewels) {
    stack<char> st;
    int ans = 0;

    for (auto i : jewels) {
        if (!st.empty() && st.top() == i) {
            st.pop();
            ans++;
        } else {
            st.push(i);
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string jewels;
        cin >> jewels;
        int result = maxJewelScore(jewels);
        cout << result << endl;
    }

    return 0;
}
