#include<bits/stdc++.h>
using namespace std;

const int N = INT_MAX, M = INT_MIN;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n), in;
    for (int i = 0; i < n; i++){
    	cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
    	int cn1 = 0, cn2 = 0;
    	for(int j = i + 1; j < n; j++) {
    		if(v[i] < v[j])
    			cn1++;
    		else if(v[i] > v[j])
    			cn2++;
    	}
    	in.push_back(max(cn1, cn2));
    }

    for(auto it: in) {
    	cout << it << ' ';
    }
    cout << '\n';
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