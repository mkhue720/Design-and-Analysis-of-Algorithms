// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[100005], res = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1, a+n+1, greater<int>());
	for (int i = 1; i <= n; i++) {
		if (i + a[i] > res) {
			res = i + a[i];
		}
	}
	cout << res + 1;
}

