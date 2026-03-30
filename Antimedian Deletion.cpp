#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    	cin >> v[i];

    if(n == 1)
    	cout << 1 << '\n';
    else {
    	for(int i = 1; i <= n; i++)
    		cout << 2 << ' ';
    	cout << '\n';
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