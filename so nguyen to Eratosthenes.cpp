// Code by NMK
// thuat toan sang so nguyen to (Eratosthenes)
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool S[n+5];
	fill (S+2, S+n+1, true); //S[0] = .... = S[n] = 1
	for (int i = 2; i <= n; i++) {
		if (S[i]) {
			cout << i << " ";
			for (int j = i * i; j <= n; j=j+i) {
				S[j] = 0;
			}
		}
	}
}

