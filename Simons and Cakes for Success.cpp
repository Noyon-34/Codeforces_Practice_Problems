#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

vector<int> v;
void divs(int n) {
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) {
			v.push_back(i);
			if(i != n / i)
				v.push_back(n / i);
		}
	}
	v.push_back(n);
	sort(v.begin(), v.end());
}

int power(int x, int n, int mod) {
    int ans = 1 % mod;
    while (n > 0) {
    	if (n & 1) {
        	ans = 1LL * ans * x % mod;
    	}
    	x = 1LL * x * x % mod;
    	n >>= 1;
  	}
  	return ans;
}
void solve() {
	v.clear();
    int n; cin >> n;

    divs(n);

    for(auto it: v) {
    	int mul = power(it, n / it, n);
    	if(mul == 0) {
    		cout << it << '\n';
    		return;
    	}
    }
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