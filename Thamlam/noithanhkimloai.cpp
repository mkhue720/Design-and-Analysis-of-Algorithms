// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	priority_queue<long, vector<long>, greater<long> > Q;
	long n;
	cin >> n;
	long a[n];
	for (long i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(auto x:a) Q.push(x);
	long b, c, x=0, y=0;
	while(Q.size() > 1) {
		b = Q.top();
		Q.pop();
		c = Q.top();
		Q.pop();
		y = b + c;
		x += y;
		Q.push(y);
	}
	cout << x;
}

