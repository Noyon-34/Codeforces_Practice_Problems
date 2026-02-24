#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

int block(string s) {
	int cn = 0, n = s.size();
	for(int i = 1; i < n; i++) {
		if(s[i - 1] != s[i])
			cn++;
	}
	return cn;
}
void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    for(int i = 0; i < n; i++) {
    	s = s.substr(n - 1, 1) + s.substr(0, n - 1);
    	ans = max(ans, block(s));
    }
    cout << ans + 1 << '\n';
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