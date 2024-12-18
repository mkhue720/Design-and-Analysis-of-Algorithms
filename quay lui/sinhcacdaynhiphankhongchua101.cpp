// code by NMK
#include <bits/stdc++.h>
using namespace std;

void TRY(string x, int n) {
	if(x.size() == n) {
		cout << x << endl;
	} else {
		for (char c : {'0', '1'}) {
			if (x.size() >= 2 and x.substr(x.size() - 2) == "10" and c =='1')
		continue;
		TRY(x + c, n);
		}
	}
}

int main() {
	int n;
	cin >> n;
	TRY("", n);
}

