#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    vector<int> in[n + 1];
    for(int i = 1; i <= n; i++) {
    	cin >> v[i];
    	in[v[i]].push_back(i);
    }

    int ans = 0, d, x = n + 1;
    for(int i = n; i > 0; i--) {
    	int m = in[i].size();
    	for(int j = m - 1; j >= 0; j--) {
    		if(in[i][j] < x) {
    			d = in[i][j] - 1;
    			x = in[i][j];
    			ans++;
    		}
    		if(d < 1) {
    			cout << ans << '\n';
    			return;
    		}
    	}
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