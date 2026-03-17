#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
using ll = long long;

vector<int> graph[N];
bool vis[N], odd_length;
int color[N], com1, com2;

void dfs(int u) {
	vis[u] = true;
	if(color[u])
		com1++;
	else
		com2++;
	for(auto v: graph[u]) {
		if(!vis[v]) {
			color[v] = color[u] ^ 1;
			dfs(v);
		}
		else {
			if(color[v] == color[u])
				odd_length = true;
		}
	}
}
void solve() {
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) {
   		graph[i].clear();
   		vis[i] = false;
   		color[i] = 0;
   	}
    while(m--) {
    	int u, v; cin >> u >> v;
    	graph[u].push_back(v);
    	graph[v].push_back(u);
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
    	if(!vis[i]) {
    		odd_length = false;
    		com1 = 0, com2 = 0;
    		dfs(i);
    		if(!odd_length) {
    			ans += max(com1, com2);
    		}
    	}
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