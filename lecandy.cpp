#include<stdio.h>
#include<iostream>

using namespace std;

int a[100005];


main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, c, sum=0;

        cin>>n>>c;

        for(int i=0; i<n; i++)
         {
            cin>>a[i];
            sum+=a[i];
        }

        if(sum<=c)
        cout<<"Yes"<<endl;

        else
        cout<<"No"<<endl;


    }
}
