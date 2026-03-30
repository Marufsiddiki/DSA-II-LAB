#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long coins[n];
    for(int i = 0; i < n; i++) cin >> coins[i];
    sort(coins, coins + n);
    long long smallest_missing = 1;
    for(int i = 0; i < n; i++) {
        if(coins[i] > smallest_missing)
            break;
        smallest_missing += coins[i];
    }
    cout << smallest_missing << "\n";
}
