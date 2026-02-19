#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter 1st Array size :";
    cin>>n1;
    cout<<"Enter 2nd Array size :";
    cin>>n2;
    int a1[n1];
    cout<<"Enter 1st Array :";
    for(int i=0; i<n1; i++)
    {
        cin>>a1[i];
    }
    cout<<"Enter 2nd Array :";
    int a2[n2];
    for(int j=0; j<n2; j++)
    {
        cin>>a2[j];
    }
    int R[n1+n2];
    int i=0,j=0,k=0;

    while(i<n1&&j<n2)
    {
        if(a1[i]<=a2[j])
        {
            R[k]=a1[i];
            k++,i++;
        }
        else
        {
            R[k]=a2[j];
            k++,j++;
        }
        for(int x=0; x<k; x++)
            cout<<R[x]<<" ";
        cout<<endl;
    }
    while(i<n1)
    {
        R[k]=a1[i];
        k++,i++;
        for(int x=0; x<k; x++)
            cout<<R[x]<<" ";
        cout<<endl;
    }
    while(j<n2)
    {
        R[k]=a2[j];
        k++,j++;
        for(int x=0; x<k; x++)
            cout<<R[x]<<" ";
        cout<<endl;
    }
    for (k=0;k<n1+n2;k++)
        {
            cout<<R[k]<<" ";
        }
        cout<<endl;
    return 0;
}
