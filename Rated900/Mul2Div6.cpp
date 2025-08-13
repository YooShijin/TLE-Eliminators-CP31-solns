#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    int cnt2 = 0, cnt3 = 0;

    while (n % 2 == 0) {
        cnt2++;
        n /= 2;
    }

    while (n % 3 == 0) {
        cnt3++;
        n /= 3;
    }

    if (n != 1 || cnt2 > cnt3) {
        cout << -1 << endl;
        return;
    }
    cout << 2 * cnt3 - cnt2 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
