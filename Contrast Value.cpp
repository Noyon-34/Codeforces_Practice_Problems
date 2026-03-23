#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(auto &it: v)
    	cin >> it;

    v.erase(unique(v.begin(), v.end()), v.end());

    int cn1 = 0, cn2 = 0;
    for(int i = 1; i < (int)v.size() - 1; i++) {
    	if(v[i - 1] < v[i] and v[i] < v[i + 1])
    		cn1++;
    	else if(v[i - 1] > v[i] and v[i] > v[i + 1])
    		cn2++;
    }

    cout << v.size() - cn1 - cn2 << '\n';
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