// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> Q;
	Q.push(6%n);
	Q.push(8%n);
	map<int, string> M = {{6%n, "6"}, {8%n, "8"}};
	while(Q.size() and M.find(0) == M.end()) {
		int u=Q.front();
		Q.pop();
		int x = (u*10+6)%n;
		if(M.find(x) == M.end()) {
			Q.push(x);
			M[x] = M[u] + "6";
		}
		int y = (u*10+8)%n;
		if(M.find(y) == M.end()) {
			Q.push(y);
			M[y] = M[u] + "8";
		}
	}
	if(M.find(0) == M.end()) cout << "0";
	else cout << M[0];
}

