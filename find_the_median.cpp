#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<int> arr) {
    // Sort the array
    sort(arr.begin(), arr.end());
    int n = arr.size();
    // Return the middle element
    return arr[n/2];
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = findMedian(arr);
    cout << result << endl;
    return 0;
}
