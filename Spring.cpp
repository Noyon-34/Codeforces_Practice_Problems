#include<bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
using ll = long long;

ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}
ll ans(ll a, ll b, ll c, ll d) {

    ll abc = d;
    ll ab = b - d;
    ll ac = c - d;
    ll A = a - b - c + d;

    return abc * 2 + ab * 3 + ac * 3 + A * 6;
}
void solve() {
    ll a, b, c; cin >> a >> b >> c;
    ll m; cin >> m;

    ll x = lcm(a, b), y = lcm(b, c), z = lcm(a, c);

    ll d = ans(m / a, m / x, m / z, m / lcm(a, y));
    ll e = ans(m / b, m / x, m / y, m / lcm(a, y));
    ll f = ans(m / c, m / y, m / z, m / lcm(a, y));

    cout << d << ' ' << e << ' ' << f << '\n';
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