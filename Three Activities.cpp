#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    for(auto &it: a)
    	cin >> it;
    for(auto &it: b)
    	cin >> it;
    for(auto &it: c)
    	cin >> it;

    vector<pair<int, int>> vp1, vp2, vp3;
    for(int i = 0; i < n; i++) {
    	vp1.push_back({a[i], i});
    }
    for(int i = 0; i < n; i++) {
    	vp2.push_back({b[i], i});
    }
    for(int i = 0; i < n; i++) {
    	vp3.push_back({c[i], i});
    }

    sort(vp1.rbegin(), vp1.rend());
    sort(vp2.rbegin(), vp2.rend());
    sort(vp3.rbegin(), vp3.rend());

    int ans = 0;
    for(int i = 0; i < 3; i++) {
    	for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(vp1[i].second != vp2[j].second and vp1[i].second != vp3[k].second and vp3[k].second != vp2[j].second)
                    ans = max(ans, vp1[i].first + vp2[j].first + vp3[k].first);
            }
        }
    }
    cout << ans << '\n';
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