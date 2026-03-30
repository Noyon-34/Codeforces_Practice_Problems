#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    if(n % 10 == 0) {
    	cout << 2 << '\n';
    }
    else if(n % 2 == 0 or n % 5 == 0) {
    	cout << 0 << '\n';
    }
    else {
    	cout << 1 << '\n';
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