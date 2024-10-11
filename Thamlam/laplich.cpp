// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, res = 0;
	long long x = -1e11;
	cin >> n;
	pair<int, int> A[n];
	for (auto &x:A){
		cin >> x.second >> x. first; // second la bd, first la kt
	}
	sort(A, A + n);
	for (auto a:A) {
		if (a.second > x) {
			x = a.first;
			res++;
		}
	}
	cout << res;
}

