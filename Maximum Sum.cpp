#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) {
    	cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 1; i <= n; i++) {
        v[i] += v[i - 1];
    }

    ll ans = 0;
    for(int i = 0; i <= k; i++) {
        ans = max(ans, v[n - k + i] - v[i * 2]);
    }

    cout << ans << '\n';
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