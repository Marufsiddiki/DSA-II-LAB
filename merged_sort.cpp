#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int num1[m + n], num2[n];
    for (int i = 0; i < m; i++)
    {
        cin >> num1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> num2[i];
    }
    int i = m - 1, j = n - 1, k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (num1[i] > num2[j])
            num1[k--] = num1[i--];
        else
            num1[k--] = num2[j--];
    }
    while (j >= 0)
        num1[k--] = num2[j--];
    for (int x = 0; x < m + n; x++)
    {
        cout << num1[x] << " ";
    }
    return 0;
}
