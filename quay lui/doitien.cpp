// code by NMK
#include <bits/stdc++.h>
using namespace std;
int n, a[100], M, res =1e9;

void TRY(int k, int t, int T) {
	if (k == n - 1) {
		if ((M - T) % a[n] == 0) res = min(res, t + (M-T)/a[n]);
	} else {
		for (int z = 0; t+z < res and T+z*a[k+1] <= M; z++) {
			TRY(k+1, t+z, T+z*a[k+1]);
		}
	}
}

int main() {
	cin >> n >> M;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	TRY(0, 0, 0);
	if (res == 1e9) cout << "0";
	else cout << res;
}

