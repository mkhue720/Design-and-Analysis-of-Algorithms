// code by NMK
// day con lien tuc co tong max
#include <bits/stdc++.h>
using namespace std;

int a[100005], n;
long DAC(int L, int R) {
	if (L == R - 1) return a[L];
	int M = (L + R) / 2;
	long res = max (DAC(L, M), DAC(M, R));
	long T = a[M-1], A = T;
	for (int i = M - 2; i >= L; i--) {
		T += a[i];
		A = max(A, T);
	}
	long S = a[M], B = S;
	for (int i = M + 1; i < R; i++) {
		S += a[i];
		B = max(B, S);
	}
	return max(res, A + B);
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << DAC(1, n+1);
}

