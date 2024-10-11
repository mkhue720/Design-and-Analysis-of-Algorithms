// code by NMK
#include <bits/stdc++.h>
using namespace std;

struct ss {
	bool operator() (int a, int b) {
		return a%2 == b%2 ? a>b:a%2>b%2;
	}
};

int main() {
//	priority_queue<int> Q;
//	priority_queue<int, vector<int>, greater<int> > Q;
	priority_queue<int, vector<int>, ss > Q;
	for (int x:{47, 36, 54, 63, 65, 34}) Q.push(x);
	while(Q.size()) {
		cout << Q.top() << " ";
		Q.pop();
	}
}

