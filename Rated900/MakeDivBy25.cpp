#include <bits/stdc++.h>
using namespace std;

int minSteps(vector<char>& v, char a, char b) {
    int n = v.size();
    int pos_b = -1, pos_a = -1;

    for (int i = n - 1; i >= 0; --i) {
        if (pos_b == -1 && v[i] == b) {
            pos_b = i;
        } else if (pos_b != -1 && v[i] == a) {
            pos_a = i;
            break;
        }
    }

    if (pos_a == -1 || pos_b == -1) return 1e9;
    return (n - pos_a - 2);
}

void solve() {
    string s;
    cin >> s;
    vector<char> v(s.begin(), s.end());

    int res = 1e9;
    res = min(res, minSteps(v, '0', '0'));
    res = min(res, minSteps(v, '2', '5'));
    res = min(res, minSteps(v, '5', '0'));
    res = min(res, minSteps(v, '7', '5'));

    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
