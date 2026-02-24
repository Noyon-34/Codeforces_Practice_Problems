#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int cn1 = 0, cn0 = 0;
    for(int i = 0; i < n; i++) {
    	if(s[i] == '1')
    		cn1++;
    }
    cn0 = n - cn1;

    if(cn1 % 2 == 0) {
    	cout << cn1 << '\n';
    	for(int i = 0; i < n; i++) {
	    	if(s[i] == '1')
	    		cout << i + 1 << ' ';
	    }
	    cout << '\n';
    	return;
    }

    if(cn0 % 2 == 1) {
    	cout << cn0 << '\n';
    	for(int i = 0; i < n; i++) {
	    	if(s[i] == '0') {
	    		cout << i + 1 << ' ';
	    	}
	    }
	    cout << '\n';
    	return;
    }

    cout << -1 << '\n';
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