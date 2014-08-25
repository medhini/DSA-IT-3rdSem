#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
int t;
int n, m;

cin>>t;
while(t--)
{
int k;

cin>>n>>m>>k;

for(int i=0; i<n; i++)
{
for(int j=0; j<m; j++)
{
cin>>a[i][j];
}
}

while(k)
{
for(int i=0; i<n; i++)
{
for(int j=0; j<m; j++)
{
    if(a[i][j]=='*')
    con++;
}

if(con<m/2)
{
    k--;
}

}


}
return 0;
}
