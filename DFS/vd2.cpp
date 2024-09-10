// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	set<int> S;
	for (int x:{4,7,2,8,4,8,3,2,4,2,6,4}) {
		S.insert(x);
	}
	for (int s:S) cout << s << " ";
	cout << endl;
	unmap<int, int> M={{3,7}, {12,4}, {-5,9}, {1,7}};
	map<int, int> M={{3,7}, {12,4}, {-5,9}, {1,7}};
	cout << M[12] << endl;
	cout << M[-5] << endl;
	cout << M.size() << endl;
	cout << M[15] << endl;
	cout << M.size() << endl;
	M[8] = 6;
	
	for (auto m:M) {
		cout << m.first << " " << m.second << endl;
	}
}

