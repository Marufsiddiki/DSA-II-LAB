#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> basket(m+1,0);

    double mid=(m+1)/2.0;

    for(int ball=1; ball<=n; ball++)
    {
        int best=1;

        for(int i=2;i<=m;i++)
        {
            if(basket[i] < basket[best])
                best=i;
            else if(basket[i]==basket[best])
            {
                if(abs(mid-i) < abs(mid-best))
                    best=i;
                else if(abs(mid-i)==abs(mid-best) && i<best)
                    best=i;
            }
        }
        basket[best]++;
        cout<<best<<endl;
    }
    return 0;
}
