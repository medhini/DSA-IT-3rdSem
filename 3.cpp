#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char arr[100];

        cin>>arr;

        int flag=1;
        int len=strlen(arr);

        for(int i=0, j=len-1; arr[i]!='\0'; i++, j--)
        {
            if(arr[i]!=arr[j])
            {
            flag=0;
            break;
            }
        }

        if(flag)
        cout<<"YES\n";

        else
        cout<<"NO\n";
    }
}
