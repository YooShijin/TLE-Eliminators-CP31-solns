#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) {
        cout << "YES" << endl;
        return;
    }

    if ((a + c) % 2 == 0) {
        ll mid = (a + c) / 2;
        if (mid % b == 0 && mid / b > 0) {
            cout << "YES" << endl;
            return;
        }
    }

    if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
