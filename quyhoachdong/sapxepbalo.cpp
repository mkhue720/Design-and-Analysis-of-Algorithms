// code by NMK
#include <bits/stdc++.h>
using namespace std;
int c[105][105] = {}, a[105], b[105], n, M;

void trace (int n, int M) {
	if (c[n][M] == 0) return;
	while (c[n][M] == c[n - 1][M]) n--;
	trace(n - 1, M - a[n]);
	cout << "\nChon vat" << n << "kich thuoc " << a[n] << "gia tri " << b[n];
}
int main() {
	cin >> n >> M;
	for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
	for (int i = 1; i <= n; i++) 
	for (int j = 1; j <= M; j++) {
		if (j < a[i]) c[i][j] = c[i - 1][j];
		else c[i][j] = max(c[i - 1][j], b[i] + c[i - 1][j - a[i]]);
	}
	cout << "\nTong gia tri lon nhat " << c[n][M] << endl;
	cout << "\n cach chon\n";
	trace(n, M);
}

