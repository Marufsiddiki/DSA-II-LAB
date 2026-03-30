#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<long long,int> pos;
    long long x;
    int l = 0, ans = 0;
    for(int r = 0; r < n; r++) {
        cin >> x;
        if(pos.count(x))
            l = max(l, pos[x] + 1);
        pos[x] = r;
        ans = max(ans, r - l + 1);
    }
    cout << ans;
}
