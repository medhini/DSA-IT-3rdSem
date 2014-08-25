#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, flag=0, a[200], count=0;
        cin>>n>>k;

        for(int i=0; i<n; i++)
        cin>>a[i];

        for(int i=0; i<n; i++)
        {
        if(a[i]%2==0)
        count++;
        }
        if(count>=k && k!=0)
        flag=1;

        if(k==0 && n-count>=1)
        flag=1;

        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
