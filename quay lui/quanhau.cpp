// code by NMK
#include <bits/stdc++.h>
using namespace std;
typedef complex<double> sp;
int x[100], n, dem = 0;

bool check (int k, int t) {
	for (int i = 1; i < k; i++) {
		if (x[i] == t) return 0;
		if (k - i == abs(x[i] - t)) return 0;
	}
	return 1;
}

void TRY (int k) {
	if (k > n) {
//		cout << "\n" << setw(5) << ++dem << ": ";
//		for (int i = 1; i <= n; i++) {
//			cout << sp (i, x[i]) << " ";
//		}
		dem++;
	} else {
		for (int t = 1; t <= n; t++) {
			if (check (k, t)) {
				x[k] = t;
				TRY(k + 1);
			}
		}
	}
}
int main() {
	cin >> n;
	TRY(1);
	cout << dem;
}

