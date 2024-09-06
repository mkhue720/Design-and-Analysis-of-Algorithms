// code by NMK
// ham upper_bound
#include <bits/stdc++.h>
using namespace std;

template <class T>
T *UB(T *L, T *R, Tx) {
	if (*(R-1) <= x) return R;
	if (L == R - 1) return L;
	int *M = L + (R - L) / 2;
	if (*M <= x) return UB(M + 1, R, x);
	return UB(L, M, x);
}

// ham lower_bound
template <class T>
T *LB(T *L, T *R, Tx) {
	if (x <= *L) return L;
	if (L >= R - 1) return R;
	T *M = L + (R - L) /2;
	if (*M < x) return LB(M + 1, R, x);
	return LB(L, M, x);
}

int main() {
	
}

