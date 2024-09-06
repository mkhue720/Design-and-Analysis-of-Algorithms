// code by NMK
// dem nghich the
// chua xong
#include <bits/stdc++.h>
using namespace std;

int a[100005], b[100005] = {INT_MAX}, c[100005] = {INT_MAX};

long long DAC(int L, int R) {
	if (L >= R - 1) return 0;
	int M = (L + R) / 2;
	int i = 0, j = 0;
	long long res = DAC (L, M) + DAC (M, R);
	for (int k = M - 1; k >= L; k--) {
		b[++i] = a[k];
	}
	for (int k = R - 1; k >= M; k--) {
		c[++j] = a[k];
	}
	for (int k = L; k < R; k++){
		if (b[i] <= c[j]) {
			a[k] = b[i--];
		} else {
			res += i;
			a[k] = c[j--];
		}
	}
	return res;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << DAC (1, n+1);
}

