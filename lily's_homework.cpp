#include <bits/stdc++.h>
using namespace std;

int countSwaps(vector<int> arr) {

    int n = arr.size();
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++) {
        v[i] = {arr[i], i};
    }
    sort(v.begin(), v.end());

    vector<bool> visited(n, false);
    int swaps = 0;
    for(int i = 0; i < n; i++) {
        if(visited[i] || v[i].second == i)
            continue;
        int cycle = 0;
        int j = i;

        while(!visited[j]) {
            visited[j] = true;
            j = v[j].second;
            cycle++;
        }
        if(cycle > 1)
            swaps += cycle - 1;
    }
    return swaps;
}

int lilysHomework(vector<int> arr) {

    vector<int> arr2 = arr;
    int asc = countSwaps(arr);
    reverse(arr2.begin(), arr2.end());
    int desc = countSwaps(arr2);
    return min(asc, desc);
}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = lilysHomework(arr);
    cout << result << endl;
    return 0;
}
