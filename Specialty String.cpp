#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; string s;
    cin >> n >> s;

    if(n & 1) {
    	cout << "NO\n";
    	return;
    }
    stack<char> st;

    for(int i = 0; i < n; i++) {
    	if(i + 1 < n and s[i] == s[i + 1]) {
    		i++;
    	}
    	else {
    		if(!st.empty() and st.top() == s[i])
    			st.pop();
    		else
    			st.push(s[i]);
    	}
    }

    cout << (st.empty() ? "YES\n" : "NO\n");
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