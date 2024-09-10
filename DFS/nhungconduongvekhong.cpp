// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int> S;
	set<int> res;
	S.push(n);
	res.insert(n);
	while (S.size()) {
		int u = S.top();
		S.pop();
		for (int a = 1; a*a <= u; a++)
		if(u%a==0) {
			int v = (a-1)*(u/a+1);
			if(res.find(v) == res.end()) {
				S.push(v);
				res.insert(v);
			}
		}
	}
	for (int r:res) cout << r << " ";
}

