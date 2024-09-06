// code by NMK
//dem cap co tong gioi han
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, M;
	long res = 0;
	cin >> n >> M;
	int a[n];
	for (int &x:a) cin >> x;
	sort (a, a+n); //sap xep a[0]<a[1]<...<a[n-1]
	for (int i = 1; i < n; i++) {
		auto *p = upper_bound(a, a+i, M-a[i]);
		res += p - a;
	}
	cout << res;
}

