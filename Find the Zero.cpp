#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, x; cin >> n;

    for(int i = 4; i <= 2 * n; i += 2) {
    	cout << "? " << i - 1 << ' ' << i << endl;
    	cin >> x;
    	if(x == 1) {
    		cout << "! " << i << endl;
    		return;
    	}
    }

    cout << "? " << 1 << ' ' << 3 << endl;
	cin >> x;
	if(x == 1) {
		cout << "! " << 1 << endl;
		return;
	}
	cout << "? " << 1 << ' ' << 4 << endl;
	cin >> x;
	if(x == 1) {
		cout << "! " << 1 << endl;
		return;
	}

	cout << "! " << 2 << endl;
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