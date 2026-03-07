#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double l;
    cin >> n >> l;

    double a[n];

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    double ans = max(a[0], l - a[n-1]);

    for(int i=1;i<n;i++)
    {
        ans = max(ans, (a[i]-a[i-1])/2.0);
    }

    cout<<ans;
}
