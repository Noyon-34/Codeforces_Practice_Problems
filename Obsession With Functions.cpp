#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    ll l, r; cin >> l >> r;

    int a[15] = {1, 4, 9, 7, 7, 9, 4, 1, 9};
    vector<int> pre(15, 0);
    for(int i = 1; i <= 9; i++) {
    	pre[i] = pre[i - 1] + a[i - 1];
    }

    l--;
    ll c = l / 9, d = l % 9;
    ll ans1 = c * 51 + pre[d];

    ll e = r / 9, f = r % 9;
    ll ans2 = e * 51 + pre[f];

    cout << ans2 - ans1 << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}