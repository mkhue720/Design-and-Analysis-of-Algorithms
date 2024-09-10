// code by NMK
#include <bits/stdc++.h>
using namespace std;
typedef pair <int, int> toado;
#define x first
#define y second
int main () {
	int x,y;
	cin >> x >> y;
	stack<toado> S;
	set<toado> res;
	S.push(toado(x, y));  // dung make_pair de push x y hoac dung {x,y} hoac goi ham toado
	res.insert(toado(x, y));
	while (S.size()) {
		int u = S.top().x;
		int v = S.top().y;
		S.pop();
		if (u%2==0 && res.find(toado(v, u/2)) == res.end()) {
			S.push(toado(v, u/2));
			res.insert(toado(v, u/2));
		}
		if (v%2!=0 && res.find(toado((v+1)/2, u)) == res.end()) {
			S.push({(v+1)/2, u});
			res.insert({(v+1)/2, u});
		}
	}
	cout << res.size();
}
