#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 7;
using ll = long long;

int dp[N][7];
// int rec(int i, int l) {
//     if(i > n)
//         return 0;
//     if(dp[l][i] != -1)
//         return dp[l][i];

//     int ans = INT_MAX;
//     for(int j = 1; j <= 6; j++) {
//         if((j != l && j != 7 - l) || l == 0) {
//             int c;
//             if(v[i] == j)
//                 c = 0;
//             else
//                 c = 1;
//             ans = min(ans, rec(i + 1, j) + c);
//         }
//     }

//     return dp[l][i] = ans;
// }
void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for(int l = 1; l < 7; l++) {
        if(v[1] == l)
            dp[1][l] = 0;
        else
            dp[1][l] = 1;
    }

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= 6; j++) {
            dp[i][j] = INT_MAX;
            for(int l = 1; l < 7; l++) {
                if(j != l && j != 7 - l) {
                    int c;
                    if(v[i] == j)
                        c = 0;
                    else
                        c = 1;
                    dp[i][j] = min(dp[i][j], dp[i - 1][l] + c);
                }
                
            }
        }
    }

    int ans = INT_MAX;
    for(int i = 1; i <= 6; i++) {
        ans = min(ans, dp[n][i]);
    }
    cout << ans << '\n';
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