#include <bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr) {
    vector<int> freq(100, 0);

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    return freq;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = countingSort(arr);

    for (int i = 0; i < 100; i++) {
        cout << result[i] << (i == 99 ? "" : " ");
    }
    cout << endl;

    return 0;
}
