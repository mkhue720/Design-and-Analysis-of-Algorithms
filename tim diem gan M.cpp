// code by NMK
// tim diem N thuoc tam giac ABC gan M nhat
#include<bits/stdc++.h>
using namespace std;
typedef pair<double, double> Diem;
#define x first
#define y second

double kc(Diem A, Diem B) {
    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

double dt(Diem A, Diem B, Diem C) {
    return abs((A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y)) / 2);
}

int main() {
    Diem A, B, C, M, N;
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> M.x >> M.y;

    if (dt(A, B, C) == dt(A, B, M) + dt(A, M, C) + dt(M, B, C)) {
        N = M;
    } else {
        double dA = kc(A, M);
        double dB = kc(B, M);
        double dC = kc(C, M);
        Diem D1, D2;

        if (dA <= dB && dB <= dC) {
            D1 = A;
            D2 = B;
        } else if (dA <= dC && dC <= dB) {
            D1 = A;
            D2 = C;
        } else if (dB <= dA && dA <= dC) {
            D1 = B;
            D2 = A;
        } else if (dB <= dC && dC <= dA) {
            D1 = B;
            D2 = C;
        } else if (dC <= dA && dA <= dB) {
            D1 = C;
            D2 = A;
        } else {
            D1 = C;
            D2 = B;
        }

        while (abs(D1.x - D2.x) > 1e-4 || abs(D1.y - D2.y) > 1e-4) {
            Diem P = {(D1.x + D2.x) / 2, (D1.y + D2.y) / 2};
            if (kc(P, M) < kc(D1, M)) {
                D2 = P;
                N = P;
            } else {
                D1 = P;
                N = P;
            }
        }
    }

    cout << "Diem N gan nhat: (" << N.x << ", " << N.y << ")" << endl;

    return 0;
}

