#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n; string s;
    cin >> n >> s;

    if(n & 1) {
        if(s[0] == 'b') {
            cout << "NO\n";
            return;
        }
        for(int i = 1; i < n; i += 2) {
            if(s[i] == s[i + 1] and s[i + 1] != '?') {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
    else {
        for(int i = 0; i < n; i += 2) {
            if(s[i] == s[i + 1] and s[i + 1] != '?') {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
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