// code by NMK
// phan vung anh
#include <bits/stdc++.h>
using namespace std;

int a[205][205], n, m, res = 0, V[10000000] = {};
void DFS(int u, int t) {
	a[u][t] = 1;
	V[res]++;
	for (int i = -1; i <= 1; i++)
	for (int j = -1; j <= 1; j++)
	if (a[u+i][t+j] == 0) DFS(u+i, t+j);
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= m; j++) cin >> a[i][j];
	
	for (int i = 0; i <= n+1; i++) a[i][0] = a[i][m+1] = 1;
	for (int j = 0; j <= m+1; j++) a[0][j] = a[n+1][j] = 1;
	
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= m; j++)
	if (a[i][j] == 0) {
		res ++;
		DFS(i, j);
	}
	cout << res << endl;
	sort (V + 1, V + res + 1);
	for (int i = 1; i <= res; i++) cout << V[i] << " ";
}

