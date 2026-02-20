#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for(auto &it: v) {
    	cin >> it;
    }

    sort(v.rbegin(), v.rend());

    vector<int> a(n + 1, 0);
    while(q--) {
    	int l, r; cin >> l >> r;
    	a[l - 1]++;
    	a[r]--;
    }

    for(int i = 1; i < n; i++) {
    	a[i] += a[i - 1];
    }

    sort(a.rbegin(), a.rend());

    ll ans = 0;
    for(int i = 0; i < n; i++) {
    	ans += (1LL * v[i] * 1LL * a[i]);
    }

    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}