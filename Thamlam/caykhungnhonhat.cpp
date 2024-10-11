// code by NMK
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define trso first
#define dinh second
int main() {
	priority_queue<pii, vector<pii>, greater<pii>> Q;
	map<int, int> L;
	long n, m, u, v, w, res = 0;
	cin >> n >> m;
	vector<pii> A[n+1];
	Q.push({0,1});
	L[1] = 0;
	for (int i = 1; i <= m; i++) {
		cin >> u >> v >> w;
		A[u].push_back({w, v});
		A[v].push_back({w, u});
	}
	while(Q.size()) {
		pii z = Q.top();
		Q.pop();
		if(L[z.dinh] == -1) continue;
		res += z.trso;
		L[z.dinh] = -1;
		for(auto t:A[z.dinh])
		if (L[t.dinh] == 0 or L[t.dinh] > t.trso) {
			L[t.dinh] = t.trso;
			Q.push(t);
		}
	}
	cout << res;
}

