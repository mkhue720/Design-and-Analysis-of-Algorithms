// code by NMK
// tong uoc le lon nhat
#include <bits/stdc++.h>
using namespace std;

long long int U(long long int n) {
	if (n < 2) return n;
	return ((n - 1) / 2 + 1) * ((n - 1) / 2 + 1) + U (n / 2);
}
int main() {
	int n;
	cin >> n;
	while (n--) {
		long long int A, B;
		cin >> A >> B;
		cout << U(B) - U(A - 1) << endl;
	}
	
}

