#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
    	int x; cin >> x;
    	v.push_back(x);
    }

    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 0; i < n; i++) {
    	if(v[i] != v[0] and v[i] != v[n - 1])
    		ans++;
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