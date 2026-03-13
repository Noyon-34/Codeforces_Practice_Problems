#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
using ll = long long;

int n;
vector<int> h[2];
ll dp[2][N];

ll rec(int i, int j) {
	if(j == n)
		return 0;
	if(dp[i][j] != -1)
		return dp[i][j];

	ll ans = 0;
	ans = max(ans, rec(i ^ 1, j + 1));
	ans = max(ans, rec(i, j + 1));
	ans = max(ans, h[i][j] + rec(i ^ 1, j + 1));

	return dp[i][j] = ans;
}
void solve() {
    cin >> n;
    for(int i = 0; i < 2; i++) {
    	for(int j = 1; j <= n; j++) {
    		int x; cin >> x;
    		h[i].push_back(x);
    	}
    }

    memset(dp, -1, sizeof dp);
    cout << max(rec(0, 0), rec(1, 0));
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