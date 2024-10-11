#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000; // Maximum number of bamboo trees

int main() {
    int n, k;
    cin >> n >> k;
    
    int bamboo[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> bamboo[i];
    }
    
    long long total_profit = 0;
    
    for (int i = 0; i < n; i++) {
        int segments = bamboo[i] / k;
        total_profit += (long long)segments * 3 * k;
    }
    
    cout << total_profit << endl;
    
    return 0;
}
