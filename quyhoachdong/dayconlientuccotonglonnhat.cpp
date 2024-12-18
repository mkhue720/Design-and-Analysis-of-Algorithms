// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[100001], c[100001];
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	c[1] = a[1];
	for (int i = 2; i <= n; i++) {
		c[i] =max(c[i-1],0) + a[i];
	}
	int tmp = c[1];
	for (int i = 1; i <=n; i++) {
		if(tmp <= c[i]) tmp = c[i];
	}
	cout << tmp;
}

