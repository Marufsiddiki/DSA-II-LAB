#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum=0,total_sum,missing_num;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>m;
        sum=sum+m;
    }
    total_sum=n*(n+1)/2;
    missing_num= total_sum - sum;
    cout<<"missing number is: "<<missing_num;

    return 0;

}
