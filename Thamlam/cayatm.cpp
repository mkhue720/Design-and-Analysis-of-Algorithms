// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
    long n, m, a[100005];
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n, greater<int>());
    
    long dem = 0; 
    for (int i = 0; i < n; i++) {
        if (m == 0) break;
        dem += m / a[i]; 
        m %= a[i];
    }
    
    if (m == 0) {
        cout << dem; 
    } else {
        cout << "ATM khong the tra tien";
    }

    return 0;
}

