#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    ll sum = 0;
    for(int i = 0; i < n; i++) {
    	sum += v[i];
    	if(sum <= 0) {
    		cout << "NO\n";
    		return;
    	}
    }

    sum = 0;
    for(int i = n - 1; i >= 0; i--) {
    	sum += v[i];
    	if(sum <= 0) {
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