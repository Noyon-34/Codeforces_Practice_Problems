#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, k, p, m;
    cin >> n >> k >> p >> m;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    int x = v[p - 1];
    if(n == k) {
        cout << m / x << '\n';
        return;
    }

    vector<int> v1(v.begin(), v.begin() + p - 1), v2;

    int sum1 = 0, sum2 = 0;
    sort(v1.begin(), v1.end());
    for(int i = 0; i < p - k; i++)
        sum1 += v1[i];

    for(int i = 0; i < n; i++) {
        if(i != p - 1)
            v2.push_back(v[i]);
    }
    sort(v2.begin(), v2.end());
    for(int i = 0; i < n - k; i++)
        sum2 += v2[i];
    cout << ((m - sum1 - x) >= 0 ? (m - sum1 - x) / (sum2 + x) + 1 : 0)<< '\n';
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