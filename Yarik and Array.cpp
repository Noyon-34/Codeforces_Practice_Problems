#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    	cin >> v[i];

    int sum = v[0], mn = min(0, v[0]);
    int ans = v[0];
    for(int i = 1; i < n; i++) {
    	if(abs(v[i]) % 2 == abs(v[i - 1]) % 2) {
    		mn = 0;
    		sum = 0;
    	}
    	sum += v[i];
    	ans = max(ans, sum - mn);
    	mn = min(mn, sum);
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