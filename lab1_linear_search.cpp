#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i=0,index=-1,key;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"search value:";
    cin>>key;
    for(int i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            index=i;
            break;
        }

    }
    cout<<"position: "<<index<<endl;
    return 0;
}
