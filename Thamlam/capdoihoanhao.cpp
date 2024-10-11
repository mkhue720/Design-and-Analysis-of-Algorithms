// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a[100005], b[100005], res = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1, a+n+1, greater<int>());
	for (int i = 1; i <= m; i++) {
		cin >> b[i];
	}
	sort(b+1, b+m+1, greater<int>());
	for (int i = 1, j = 1; i <= n and j <= m;) {
		if (a[i] > b[j]) {
			j++;
			i++;
			res++;
		} else {
			j++;
		}	
	}
	cout << res;
}

