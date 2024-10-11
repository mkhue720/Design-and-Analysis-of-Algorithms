// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	priority_queue<pair<int, int>> Q;
	int n, k, a;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		Q.push({a, i});
		if (i >= k) {
			while(i-Q.top().second >=k) Q.pop();
			cout << Q.top().first << " ";
		}
	}
}

