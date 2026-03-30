#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    	cin >> v[i];

    sort(v.begin(), v.end());
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    	mp[v[i]]++;

    for(int i = 0; i < n; i++) {
    	if(mp[v[i]] > 1 and v[i] != v[n - 1]) {
    		cout << "NO\n";
    		return;
    	}
    }
    cout << "YES\n";
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