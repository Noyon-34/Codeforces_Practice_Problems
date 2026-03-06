#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 7;
using ll = long long;

int m;
int dp[N];

void rec(int n) {
    if(dp[n] != -1)
        return;

    dp[n] = 1;
    if(n % 3) return;

    rec(n / 3);
    rec((n / 3) * 2);   
}
void solve() {
    int n; cin >> n >> m;

    if(n == m) {
    	cout << "YES\n";
    	return;
    }
    if(n % 3 or n < m) {
    	cout << "NO\n";
    	return;
    }

    // memset(dp, -1, sizeof dp);
    // rec(n);
    stack<int> st;
    st.push(n);

    while(!st.empty()) {
        int x = st.top();
        st.pop();

        // if(dp[x] != -1)
        //     continue;
        if(x == m) {
            cout << "YES\n";
            return;
        }

        dp[x] = 1;
        if(x % 3) 
            continue;

        st.push(x / 3);
        st.push((x / 3) * 2);
    }
    cout << "NO\n";
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