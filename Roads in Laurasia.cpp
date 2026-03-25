#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
using ll = long long;

vector<int> graph[N];
int cn;

void dfs(int u, int p) {
	if(graph[u].size() == 1)
		cn++;

	for(auto v: graph[u]) {
		if(v != p) {
			dfs(v, u);
		}
	}
}
void solve() {
    int n; cin >> n;
    for(int i = 1; i < n; i++) {
    	int u, v; cin >> u >> v;
    	graph[u].push_back(v);
    	graph[v].push_back(u);
    }

    cn = 0;
    dfs(1, 0);

    cout << ceil(1.0 * cn / 2) << '\n';

    for(int i = 1; i <= n; i++) {
    	graph[i].clear();
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