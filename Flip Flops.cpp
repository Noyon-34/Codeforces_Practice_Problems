#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    ll n, c, k; cin >> n >> c >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        if(v[i] == c) {
            c += v[i];
        }
        else if(v[i] < c) {
            if(c - v[i] <= k) {
                k -= (c - v[i]);
                c += c;
            }
            else {
                c += k + v[i];
                k = 0;
            }
        }
    }

    cout << c << '\n';
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