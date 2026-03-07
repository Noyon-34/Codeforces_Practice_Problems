#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

int prime(int n) {
	set<int> s;
	for(int i = 2; i * i <= n; i++) {
		while(n % i == 0) {
			s.insert(i);
			n /= i;
		}
	}

	if(n > 1) {
		s.insert(n);
	}
	if(s.size() > 1)
		return 0;
	if(s.size() == 0)
		return 1;
	if(s.size() == 1)
		return *s.begin();
}
void solve() {
    int n; cin >> n;
    vector<int> v(n), a;
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    if(is_sorted(v.begin(), v.end())) {
    	cout << "Bob\n";
    	return;
    }
    for(int i = 0; i < n; i++) {
    	int x = prime(v[i]);
    	if(!x) {
    		cout << "Alice\n";
    		return;
    	}
    	else
    		a.push_back(x);
    }

    if(is_sorted(a.begin(), a.end())) {
    	cout << "Bob\n";
    }
    else {
    	cout << "Alice\n";
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