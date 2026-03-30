#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
    	cin >> a[i];
    for(int i = 0; i < n; i++)
    	cin >> b[i];

    int ans = 0;
    for(int i = 0; i < n; i++) {
    	for(int j = i + 1; j < n; j++) {
			int mx = max(a[i], a[j]), mn = min(a[i], a[j]);
			if(mx > 200)
				mx -= 100;
			else
				mx /= 2;
			int total = mx + mn;
			if(total <= k)
				ans = max(ans, b[i] + b[j]);
    	}
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