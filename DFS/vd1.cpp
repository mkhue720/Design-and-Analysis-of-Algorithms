// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	stack<int> S;
	for(int x:{4,7,2,8,5}) S.push(x);
	cout << "\nDinh cua S: " << S.top();
	S.pop(); //lay ra
	S.push(9);  //dua 9 vao
	S.top() = 9;
	cout << "\nDinh cua S: " << S.top();
	cout << "\nSize cua S: " << S.size();
	S.top() *= 2;
	cout << "\nDinh cua S: " << S.top();
	cout << "\nSize cua S: " << S.size();
}

