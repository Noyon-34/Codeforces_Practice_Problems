#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    sort(a.begin(), a.end());
    int ans = 0;
    int l = 1, r = a[n - 1];

    while(l <= r) {
        int mid = (l + r) / 2;

        ll sum = 0;
        for(int i = 0; i < n; i++) {
            sum += a[i] / mid;
        }

        if(sum >= m) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}