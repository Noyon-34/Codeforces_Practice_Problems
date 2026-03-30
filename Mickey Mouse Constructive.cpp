#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7, mod = 676767677;
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
    int x, y;
    cin >> x >> y;

    if(x - y == 0) {
    	cout << 1 << '\n';
    }
    else {
    	divs(abs(x - y));
    	cout << divisors.size() % mod<< '\n';
    	divisors.clear();
    }

    for(int i = 0; i < x; i++)
    	cout << 1 << ' ';
    for(int i = 0; i < y; i++)
    	cout << -1 << ' ';
    cout << '\n';
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