#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    int a[n + 1], b[n + 1];

    for(int i = 1; i <= n; i++)
    	cin >> a[i];
    for(int i = 1; i <= n; i++)
    	cin >> b[i];

    for(int i = 1; i <= n - k; i++) {
    	if(a[i] != b[i] and b[i] != -1) {
    		cout << "NO\n";
    		return;
    	}
    }
    for(int i = k + 1; i <= n; i++) {
    	if(a[i] != b[i] and b[i] != -1) {
    		cout << "NO\n";
    		return;
    	}
    }

    if(2 * k > n) {
    	map<int, int> mp, mpp;
    	for(int i = n - k + 1; i <= k; i++) {
    		mp[a[i]] = 1;
    	}
	    for(int i = n - k + 1; i <= k; i++) {
	    	if(b[i] == -1)
	    		continue;
	    	mpp[b[i]]++;
	    	if(!mp[b[i]]) {
	    		cout << "NO\n";
	    		return;
	    	}
	    	else if(mpp[b[i]] > 1) {
	    		cout << "NO\n";
	    		return;
	    	}
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