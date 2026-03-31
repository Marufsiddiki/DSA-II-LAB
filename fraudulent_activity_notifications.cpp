#include <bits/stdc++.h>
using namespace std;

double getMedian(const vector<int>& freq, int d) {
    int count = 0;
    if (d % 2 == 1) {
        int mid = d / 2 + 1;
        for (int i = 0; i <= 200; i++) {
            count += freq[i];
            if (count >= mid) return i;
        }
    } else {
        int first = -1, second = -1;
        int mid1 = d / 2, mid2 = d / 2 + 1;
        for (int i = 0; i <= 200; i++) {
            count += freq[i];
            if (first == -1 && count >= mid1) first = i;
            if (count >= mid2) {
                second = i;
                break;
            }
        }
        return (first + second) / 2.0;
    }
    return 0.0;
}

int activityNotifications(vector<int>& expenditure, int d) {
    vector<int> freq(201, 0);
    int n = expenditure.size();
    int notifications = 0;

    for (int i = 0; i < d; i++) freq[expenditure[i]]++;

    for (int i = d; i < n; i++) {
        if (expenditure[i] >= 2 * getMedian(freq, d)) {
            notifications++;
        }
        freq[expenditure[i]]++;
        freq[expenditure[i - d]]--;
    }

    return notifications;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    if (!(cin >> n >> d)) return 0;

    vector<int> expenditure(n);
    for (int i = 0; i < n; i++) cin >> expenditure[i];

    cout << activityNotifications(expenditure, d) << endl;

    return 0;
}
