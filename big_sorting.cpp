#include <bits/stdc++.h>
using namespace std;
bool compareNumbers(string a, string b)
{
    if(a.length() != b.length())
        return a.length() < b.length();
    return a < b;
}
int main()
{
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, compareNumbers);
    for(int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}
