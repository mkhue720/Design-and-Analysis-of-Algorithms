#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i=a; i<=b; i++)
int main(){
	int n, m, a[100][100], sx, sy, fx, fy;
	cin >> n >> m;
	FOR(i, 1, n)
	FOR(j, 1, m) cin >> a[i][j];
	FOR(i, 0, n+1) a[i][0] = a[i][m+1] = 1;
	FOR(j, 0, n+1) a[0][j] = a[n+1][j] = 1;
	cin >> sx >> sy >> fx >> fy;
	queue<pair<int, int> > Q;
	Q.push({sx, sy});
	a[sx][sy] = 1;
	while(Q.size() && a[fx][fy] == 0){
		int u=Q.front().first, v = Q.front().second;
		Q.pop();
		pair<int, int> Next[]={{u, v+1}, {u, v-1}, {u+1, v}, {u-1, v}};
		for(auto t:Next)
		if(a[t.first][t.second] == 0){ Q.push(t); a[t.first][t.second] =a[u][v]+1;}
	}
	cout << a[fx][fy]-1;
}
