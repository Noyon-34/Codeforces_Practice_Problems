#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int q; cin >> q;

    multiset<int> s;
    while(q--) {
    	int t, h; cin >> t >> h;
    	if(t == 1) {
    		s.insert(h);
    	}
    	else {
    		s.erase(s.begin(), s.upper_bound(h));
    	}

    	cout << s.size() << '\n';
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