// code by NMK
//Liet ke cac xau
#include <bits/stdc++.h>
using namespace std;

set <string> res;
void DAC(string x) {
	if (x=="") return;
	if (res.find(x) !=res.end()) return;
	res.insert(x);
	DAC(x.substr(0, x.size()-1));
	DAC(x.substr(1, x.size()-1));
}

int main() {
	string x;
	cin >> x;
	DAC(x);
	for (auto r:res) cout << r << endl;
}

