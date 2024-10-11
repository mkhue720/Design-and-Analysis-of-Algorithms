// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	long n, k, m, a[100005], res = 0;
	cin >> n >> k >> m;
	queue<long> Q;
	for (long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(long i = 1; i <= n + k - 1; i++) {
		if (i <= n) {
			Q.push(a[i]);
		} else {
			Q.push(0);
		}
		while(Q.size() > k) Q.pop();
		long t = 0;
		while(Q.size() > 0 && t + Q.front() <= m) {
			t += Q.front();
			Q.pop();
		}
		if (t < m && Q.size()) {
			Q.front() -= m - t;
			t = m;
		}
		res += t;
	}
	cout << res;
}

