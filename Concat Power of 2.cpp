#include<bits/stdc++.h>
using namespace std;

const int N = 1e9;
using ll = long long;

vector<string> vs;
vector<int> ans;

void dfs(string s) {
	if(s.size() > 10)
		return;

	if(!s.empty()) {
		ll n = stoll(s);
		if(n > N)
			return;
		ans.push_back(n);
	}

	for(auto v: vs) {
		dfs(s + v);
	}
}
void solve() {
    for(ll i = 1; i <= N; i *= 2) {
    	vs.push_back(to_string(i));
    }

    dfs("");

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    int n; cin >> n;

    cout << ans[n - 1];
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