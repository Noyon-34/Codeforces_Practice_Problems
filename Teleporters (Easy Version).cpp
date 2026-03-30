#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, c; cin >> n >> c;
    vector<int> v(n);
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
    	a[i] = v[i] + i + 1;
    }

    sort(a.begin(), a.end());
    int cn = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
    	sum += a[i];
    	if(sum <= c)
    		cn++;
    	else
    		break;
    }

    cout << cn << '\n';
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