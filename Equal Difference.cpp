#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++) {
    	cin >> a[i];
    }

    ll ans = 0;
    map<int, int> mp;
    for(int i = 1; i <= n; i++) {
    	a[i] = i - a[i];
    	mp[a[i]]++;
    }

    for(auto it: mp) {
    	int k = it.second - 1;
    	ans += (k * (k + 1)) / 2;
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