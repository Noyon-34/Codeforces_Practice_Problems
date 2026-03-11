#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
using ll = long long;

void solve() {
    int n; string s;
    cin >> n >> s;

    int pre = 0;
    map<int, int> mp;

    mp[0]++;
    for(int i = 1; i <= n; i++) {
    	pre += s[i - 1] - '0';
    	mp[pre - i]++;
    }

    ll ans = 0;
    for(auto it: mp) {
    	ll x = it.second;
    	ans += (x * (x - 1)) / 2;
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