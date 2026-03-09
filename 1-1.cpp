#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n;
    string s, t;
    cin >> n >> s;

    t = s;
    int cn1 = 0, cn2 = 0;

    for(int i = 0; i < n; i++) {
    	if(s[i] == '1')
    		cn1++;
    }
    for(int i = 1; i < n - 1; i++) {
    	if(s[i - 1] == '1' and s[i + 1] == '1') {
    		if(s[i] == '0') {
    			t[i] = '1';
    			cn1++;
    		}
    	}
    }

    cn2 = cn1;
    for(int i = 1; i < n - 1; i++) {
    	if(t[i - 1] == '1' and t[i + 1] == '1') {
    		if(t[i] == '1') {
    			t[i] = '0';
    			cn2--;
    		}
    	}
    }

    cout << cn2 << " " << cn1 << '\n';
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