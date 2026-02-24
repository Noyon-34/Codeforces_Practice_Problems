#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    ll x, y; cin >> x >> y;
    if(x <= abs(y)) {
    	cout << "NO\n";
    	return;
    }
    if(y < 0) {
    	y = abs(y);
    	ll k = x - y * 4;
    	cout << (k >= 0 and k % 3 == 0 ? "YES\n" : "NO\n");
    }
    else if(y > 0) {
    	ll k = x - y * 2;
    	cout << (k >= 0 and k % 3 == 0 ? "YES\n" : "NO\n");
    }
    else {
    	cout << (x % 3 == 0 ? "YES\n" : "NO\n");
    }
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