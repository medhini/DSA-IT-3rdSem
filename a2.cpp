#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
int a[100005], b[100005];
int main()
{
long long int n, m;
int count=0;

scanf("%lld %lld", &n, &m);
for(int i=0; i<m; i++)
{
    cin>>a[i]>>b[i];
}
int ans=100005;
for(int i=0; i<m; i++)
{
    if(a[i]!=n && b[i]!=n)
    {
    if(a[i]>b[i])
    count++;
    }
    else
    {
    if(a[i]>b[i])
    count++;

    ans=min(ans, count);
    count=0;
    }
}

cout<<ans<<endl;
return 0;
}
