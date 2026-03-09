#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

void solve() {
    int n, m, l; cin >> n >> m >> l;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    vector<int> anime(m, 0);
    int k = n, sum = 0;
    for(int i = 1; i <= l; i++) {
        sort(anime.rbegin(), anime.rend());
        
        anime[min(m, k + 1) - 1]++;
        sort(anime.rbegin(), anime.rend());

        if(k > 0 and a[n - k] == i) {
            sum += anime[0];
            anime[0] = 0;
            k--;
        }
    }

    cout << l - sum << '\n';
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