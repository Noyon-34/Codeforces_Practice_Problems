#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, mx = 0; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	mx = max(mx, v[i]);
    }

    cout << count(v.begin(), v.end(), mx) << '\n';
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