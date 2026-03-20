#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> in(N, 0);

    for(int i = 0; i < n; i++) {
    	int x; cin >> x;
    	in[x] = i + 1;
    }

    int mx = -1;
    for(int i = 1; i <= N; i++) {
    	for(int j = 1; j <= N; j++) {
    		if(in[i] and in[j] and __gcd(i, j) == 1) {
    			mx = max(mx, in[i] + in[j]);
    		}
    	}
    }

    cout << mx << '\n';
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