// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, x;
	priority_queue<int> L;
	priority_queue<int, vector<int>, greater<int>> R;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (i % 2 != 0) {
			L.push(x);
		} else {
			R.push(x);
		}
		if (i >= 2 and L.top() > R.top()) {
			int u = L.top();
			L.pop();
			int v = R.top();
			R.pop();
			L.push(v);
			R.push(u);
		}
		cout << L.top() << " ";
	}
}
