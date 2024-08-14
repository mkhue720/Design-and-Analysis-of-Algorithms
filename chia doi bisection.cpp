// Code by NMK
// thuat toan chia doi
#include<bits/stdc++.h>
using namespace std;
typedef pair <double, double> Diem;
#define x first
#define y second

double kc (Diem A, Diem B) {
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

int main() {
	Diem A, B, M;
	cin >> A.x >> A.y >> B.x >> B.y >> M.x >> M.y;
	while (abs(A.x - B.x) > 1e-4 or abs(A.y - B.y) > 1e-4) {
		Diem C = {(A.x + B.x) / 2, (A.y + B.y) / 2};
		if (kc(A,M) > kc(B,M)) {
			A = C;
		}
		else B = C;
	}
	cout << A.x << " " << A.y;
}
