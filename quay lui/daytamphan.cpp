// code by NMK
#include <bits/stdc++.h>
using namespace std;
int dem = 0;
void TRY(int *x, int k, int n) {
	if (k - 1 == n) {
		dem++;
		for (int i = 1; i < k; i++) {
			cout << x[i] << " ";
		}
		cout << endl;
	} else {
		for (x[k] = 0; x[k] <= 2; x[k]++) {
			if(k > 1 and x[k] == x[k - 1]) continue;
			if (k > 1 and x[k] == 3 - x[k - 1]) continue;
			TRY(x, k + 1, n);
		}
	}
}

int main() {
	int x[1000], n;
	cin >> n;
	TRY(x, 1, n);
	cout << dem;
}

