#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, x; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++)
    	cin >> a[i];
    for(int i = 1; i <= n; i++)
    	cin >> x;

    int ans = 0;
    if(__gcd(a[1], a[2]) < a[1])
    	ans++;
    if(__gcd(a[n - 1], a[n]) < a[n])
    	ans++;

    for(int i = 2; i < n; i++) {
    	int x = __gcd(a[i - 1], a[i]);
    	int y = __gcd(a[i], a[i + 1]);
    	ll lcm = (1LL * x * y) / __gcd(x, y);
    	if(lcm < a[i])
    		ans++;
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