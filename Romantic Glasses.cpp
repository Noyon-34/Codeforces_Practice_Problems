#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    map<ll, ll> mp;
    mp[0] = 1;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
    	v[i] *= (i % 2 ? 1 : -1);
    	sum += v[i];
    	if(mp[sum]) {
    		cout << "YES\n";
    		return;
    	}
    	mp[sum] = 1;
    }

    cout << "NO\n";
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