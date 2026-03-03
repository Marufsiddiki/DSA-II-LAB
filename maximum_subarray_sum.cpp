#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int current_sum = arr[0];
    int max_sum = arr[0];

    for(int i=1; i<n; i++) {
        if(current_sum<0)
            current_sum = arr[i];
        else
            current_sum += arr[i];

        if(current_sum>max_sum)
            max_sum = current_sum;
    }
    cout << max_sum << endl;
    return 0;
}
