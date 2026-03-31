#include <bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr) {
    vector<int> freq(100, 0);

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    vector<int> result;
    for (int i = 0; i < 100; i++) {
        while (freq[i] > 0) {
            result.push_back(i);
            freq[i]--;
        }
    }

    return result;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> sorted = countingSort(arr);

    for (int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << (i == sorted.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
