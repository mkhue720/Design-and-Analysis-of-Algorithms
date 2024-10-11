#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000; // Maximum number of notebooks

int main() {
    int n;
    cin >> n;
    
    int prices[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    sort(prices, prices + n, greater<int>());
    
    long long total = 0;
    int groupSize = 0;
    
    for (int i = 0; i < n; i++) {
        if (groupSize == 2) {
            // For every third notebook, we have a choice:
            // 1. Don't pay for it (part of the "buy 3, get cheapest free" deal)
            // 2. Pay 2/3 of its price (individual discount)
            total += min(0, 2 * prices[i] / 3);
            groupSize = 0;
        } else {
            // For other notebooks, we always apply the individual discount
            total += 2 * prices[i] / 3;
            groupSize++;
        }
    }
    
    cout << total << endl;
    
    return 0;
}
