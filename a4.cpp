#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<vector>

using namespace std;
int a[500], count[500], tab[500], num[500];

int main()
{
int t;
scanf("%d", &t);
while(t--)
{
int n,m, pos,clean=0, el;

vector <int> dis[1000];

scanf("%d %d", &n, &m);

memset(count, 0, 1000);
memset(num, 0, 1000);
memset(tab, -1, 1000);

for(int i=0; i<m;i++)
{
    scanf("%d", &a[i]);
    dis[a[i]].push_back(i);
}
tab[0]=dis[a[0]][0];
clean=1;
count[a[0]]=1;
dis[a[0]].erase(dis[a[0]].begin());
num[0]=a[0];

for(int i=1; i<m; i++)
{
    if(count[a[i]])
    {
        for(int j=0; j<n; j++)
        {
            if(tab[j]==dis[a[i]][0])
            {
                dis[a[i]].erase(dis[a[i]].begin());
                if(dis[a[i]].size())tab[j]=dis[a[i]][0];
                else tab[j]=-1;
            }
        }
    }
    else
    {
    int max=tab[0], pos=0, el=num[0];
    for(int j=1; j<n; j++)
    {
        if(tab[j]==-1)
        {
        max=tab[j];
        pos=j;
        el=num[j];
        break;
        }
        if(tab[j]>=max)
        {
        max=tab[j];
        pos=j;
        el=num[j];
        }
    }
    dis[a[i]].erase(dis[a[i]].begin());
    tab[pos]=dis[a[i]][0];

    cout<<a[i]<<" "<<pos<<" "<<endl;

    count[el]=0;

    num[pos]=a[i];

    count[a[i]]=1;
    clean++;
    }
}
printf("%d\n", clean);
}
return 0;
}
