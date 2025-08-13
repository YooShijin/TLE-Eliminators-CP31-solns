#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second

set<pii> generate_moves(int x, int y, int a, int b) {
    vector<pii> directions = {
        {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
    };

    set<pii> moves;

    for (auto d : directions) {
        int dx = d.ff, dy = d.ss;

        moves.insert({x + dx * a, y + dy * b});
        moves.insert({x + dx * b, y + dy * a});
        moves.insert({x - dy * b, y + dx * a});
        moves.insert({x - dy * a, y + dx * b});
    }

    return moves;
}

void solve() {
    int a, b;
    cin >> a >> b;

    int xq, yq;
    cin >> xq >> yq;

    int xk, yk;
    cin >> xk >> yk;

    set<pii> queen_moves = generate_moves(xq, yq, a, b);
    set<pii> knight_moves = generate_moves(xk, yk, a, b);

    int ans = 0;

    for (auto& p : knight_moves) {
        if (queen_moves.count(p)) ans++;
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}
