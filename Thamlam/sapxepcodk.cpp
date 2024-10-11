// code by NMK
#include <bits/stdc++.h>
using namespace std;

struct ss {
	bool operator() (int a, int b) {
		return a%3 == b%3 ? a>b:a%3>b%3;
	}
};

int main() {
	priority_queue<int, vector<int>, ss > Q;
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(auto x:a) Q.push(x);
	while(Q.size()) {
		cout << Q.top() << " ";
		Q.pop();
	}
}

