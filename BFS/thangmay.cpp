// Code by NMK
#include<bits/stdc++.h>
using namespace std;

int main() {
	queue<int> Q;
//		PART 2: thang may
	int n, k, m, s, f;
	cin >> n >> k >> m >> s >> f;
	map<int, int> mp={{s,0}};
	Q.push(s);
	while (Q.size() && mp.find(f) == mp.end()) {
		int u = Q.front();
		Q.pop();
		if(u+k <= n && mp.count(u+k) == 0) {
			mp[u+k] = mp[u]+1;
			Q.push(u+k);
		}
		if(u-m >0 && mp.count(u-m) == 0) {
			mp[u-m] = mp[u]+1;
			Q.push(u-m);
		}
	}
	if (mp.find(f) == mp.end()) cout << -1;
	else cout << mp[f];
	
}

