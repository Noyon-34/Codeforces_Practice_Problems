#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
const long long inf = 1e15 + 7;
using ll = long long;

vector<int> divisors;
void divs(int n) {
	for(int i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			divisors.push_back(i);
			if(i != n / i)
				divisors.push_back(n / i);
		}
	}
}
void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    divs(n);

    ll ans = 0;
    for(auto it: divisors) {
    	ll sum = 0, mx = 0, mn = inf;
    	int cn = 0;
    	for(int i = 0; i < n; i++) {
    		sum += v[i];
    		cn++;
    		if(cn == it) {
    			mx = max(mx, sum);
    			mn = min(mn, sum);
    			sum = 0, cn = 0;
    		}
    	}
    	ans = max(ans, mx - mn);
    }

    cout << ans << '\n';
    divisors.clear();
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