#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
using ll = long long;

int n, c[N], p[N];
double dp[N];
double s;

double rec(int i) {
	if(i == n + 1)
		return 0;
	if(dp[i] >= 0)
		return dp[i];

	double ans = rec(i + 1);
	ans = max(ans, rec(i + 1) * (1 - p[i] / 100.0) + c[i]);

	return dp[i] = ans;
}
void solve() {
  	cin >> n;
    for(int i = 1; i <= n; i++) {
    	cin >> c[i] >> p[i];
    }

    s = 1;
    memset(dp, -1, sizeof dp);
    cout << fixed << setprecision(10) << rec(1) << '\n';

    // double dp = 0;

    // for(int i = n; i >= 1; i--) {
    //     double x = c[i] + (1 - p[i] / 100.0) * dp;
    //     dp = max(dp, x);
    // }
    // cout << fixed << setprecision(10) << dp << '\n';
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