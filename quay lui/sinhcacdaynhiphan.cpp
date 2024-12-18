// code by NMK
#include <bits/stdc++.h>
using namespace std;

void TRY(int *x, int k, int n) {
	if (k - 1 == n) {
		for (int i = 1; i < k; i++) {
			cout << x[i];
		}
		cout << endl;
	} else {
		for (x[k] = 0; x[k] <= 1; x[k]++) {
			TRY(x, k + 1, n);
		}
	}
}

int main() {
	int x[1000], n;
	cin >> n;
	TRY(x, 1, n);
}

