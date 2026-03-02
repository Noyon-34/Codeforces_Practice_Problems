#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 7;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    stack<int> st;
    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty()) {
            if(st.top() == v[i] + 1)
                st.pop();
            else
                break;
        }
        st.push(v[i]);
    }

    cout << st.size() << '\n';
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