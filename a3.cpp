#include<stdio.h>
#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

int count[1000]={}, a[1000];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        for(int i=0; i<m; i++)
        {
            cin>>a[i];
            remcount[a[i]]++;

        }
    }
}
