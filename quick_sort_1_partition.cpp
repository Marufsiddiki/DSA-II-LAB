#include <bits/stdc++.h>
using namespace std;

vector<int> quickSort(vector<int> arr) {
    int pivot = arr[0];
    vector<int> left;
    vector<int> right;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < pivot)
            left.push_back(arr[i]);
        else
            right.push_back(arr[i]);
    }
    vector<int> result;
    for (int x : left)
        result.push_back(x);

    result.push_back(pivot);

    for (int x : right)
        result.push_back(x);

    return result;
}
int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> result = quickSort(arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
