#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> water;
#define f first
#define s second
int main() {
	int n, m, k;
	cin >> n >> m >> k;
	queue<water> Q;
	Q.push({0,0});
	map<water, int> M = {{water(0,0), 0}};
	while (Q.size()) {
		int x = Q.front().f;
		int y = Q.front().s;
		int z = x + y;
		Q.pop();
		water Next[] = {{0,y},{n,y},{x,0},{x,m},{max(0,z-m),min(z,m)},{min(z,n),max(0,z-n)}};
		for (auto t:Next)
		if(M.find(t) == M.end()) {
			M[t] = M[{x,y}] + 1;
			Q.push(t);
			if(t.f==k or t.s==k) {
				cout << M[t];
				return 0;
			}
		}
	}
	cout << "Khong dong duoc nuoc";
}

