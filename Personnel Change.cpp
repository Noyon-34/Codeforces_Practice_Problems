#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    map<int, int> mp1, mp2;
    for(int i = 0; i < n; i++) {
    	int u, v; cin >> u >>v;
    	mp1[u]++;
    	mp2[v]++;
    }

    for(int i = 1; i <= m; i++) {
    	cout << mp2[i] - mp1[i] << '\n';
    }
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