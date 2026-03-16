#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; string s;
    cin >> n >> s;

    int cn = 0;
    for(int i = 1; i < n - 1; i++) {
    	if(s[i] == 'R')
    		cn++;
    	else
    		break;
    }

    if(cn == n - 2)
    	cout << n << '\n';
    else
    	cout << 2 + cn << '\n';
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