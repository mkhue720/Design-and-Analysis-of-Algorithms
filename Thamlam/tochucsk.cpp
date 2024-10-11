// code by NMK
#include <bits/stdc++.h>
using namespace std;
bool ss(pair<int, int> u, pair<int, int> v) {
	return u.second << v. second;
}
void sol() {
	int n, res = 0;
	int x = INT_MAX;
	int y = -INT_MAX;
	cin >> n;
	pair<int, int> A[n];
	for (auto &x:A){
		cin >> x.first >> x. second;
	}
	sort(A, A + n, ss);
	for (auto a:A) {
		if (x < y) swap(x, y);
		if (a.first > x) {
			y = a.second;
			res++;
		}
	}
	cout << res << endl;;
}

int main() {
	int test;
	cin >> test;
	while(test--) sol();
}

