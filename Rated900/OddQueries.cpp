#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n + 1);
        vector<ll> prefix(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            ll total = prefix[n];
            ll sub_sum = prefix[r] - prefix[l - 1];

            ll new_sub_sum = 1LL * (r - l + 1) * k;

            ll new_total = total - sub_sum + new_sub_sum;

            if (new_total % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
