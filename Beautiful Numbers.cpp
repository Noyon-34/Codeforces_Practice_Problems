#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    string s; cin >> s;
    
    sort(s.begin() + 1, s.end());

    int sum = 0, n = s.size();
    for(int i = 0; i < n; i++) {
        sum += (s[i] - '0');
    }

    if(sum < 10) {
        cout << 0 << '\n';
        return;
    }
    int sum1 = sum, sum2 = sum, cn1 = 0, cn2 = 1;

    for(int i = n - 1; i > 0; i--) {
        sum1 -= (s[i] - '0');
        cn1++;
        if(sum1 < 10)
            break;
    }

    sum2 -= (s[0] - '0');
    sum2++;
    if(sum2 > 9) {
        for(int i = n - 1; i > 0; i--) {
            sum2 -= (s[i] - '0');
            cn2++;
            if(sum2 < 10)
                break;
        }
    }

    cout << min(cn1, cn2) << '\n';
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