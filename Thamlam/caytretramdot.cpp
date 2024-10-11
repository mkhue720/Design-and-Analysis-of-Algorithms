// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k = 0, m = 0, a, T = 0;
	cin >> n;
	while (n--) {
		cin >> a;
		k += a % 2;
		T += a;
	}
	m = n - k;
	if (abs(k-m) <= 1) cout << T;
	else cout << T - ((n - 2 * min(k, m)) + 1);
}

