#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
using ll = long long;
const ll inf = 1e11 + 7;

vector<pair<int, int>> graph[N];
void solve() {
    int n, m; cin >> n >> m;
    for(int i = 1; i <= m; i++) {
    	int u, v, w;
    	cin >> u >> v >> w;
    	graph[u].push_back({v, w});
    	graph[v].push_back({u, w});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<ll> dis(n + 1, inf);
    vector<int> par(n + 1);

    dis[1] = 0;
    pq.emplace(0, 1);

    while(!pq.empty()) {
    	auto top = pq.top();
    	pq.pop();

    	int d = top.first, u = top.second;

    	if(d > dis[u])
    		continue;

    	for(auto v: graph[u]) {
    		int vv = v.first, w = v.second;

    		if(dis[vv] > w + dis[u]) {
    			dis[vv] = w + dis[u];
    			pq.emplace(dis[vv], vv);
    			par[vv] = u;
    		}
    	}
    }
    
    if(dis[n] == inf) {
    	cout << -1;
    	return;
    }
    
    int vv = n;
    vector<int> ans;
    while(vv != 1) {
    	ans.push_back(vv);
    	vv = par[vv];
    }
    ans.push_back(1);

    reverse(ans.begin(), ans.end());

    for(auto it: ans)
    	cout << it << ' ';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}