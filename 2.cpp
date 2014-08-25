#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int a[200], b[200], dp[200][200];

main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m, n;

        cin>>m;

        for(int i=1; i<=m;  i++)
            cin>>a[i];

        cin>>n;

        for(int i=1; i<=n; i++)
            cin>>b[i];

        	for( int i=1;i<=m;i++)
{
dp[i][0]=i;
}
for(int i=1;i<=n;i++)
{
dp[0][i]=i;
}


        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(a[i]==b[j])
                    dp[i][j]=dp[i-1][j-1];

                else
                dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
            }

        }

        cout<<dp[m][n]<<endl;
    }
}
