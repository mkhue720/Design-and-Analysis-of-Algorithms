// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	queue<int> Q;
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Q.push(0);
	map<int, int> M = {{0, 0}};
	while (Q.size()) {
		int u = Q.front();
		Q.pop();
		for (int x:a)
		if (u + x <= m && M.count(u + x) == 0) {
			Q.push(u+ x);
			M[u + x] = M[u] + 1;
		}
	}
	if (M.count(m) == 0) {
		cout << "khong doi duoc";
	} else {
		cout << M[m];
	}
}

