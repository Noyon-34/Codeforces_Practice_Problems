#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    for(int i = 1; i <= n; i++) {
    	for(int j = 1; j <= n; j++) {
    		int x; cin >> x;
    		mp[x]++;
    	}
    }

    int a = n * (n - 1);
    for(auto it: mp) {
    	if(it.second > a) {
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