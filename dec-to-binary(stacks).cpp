#include<stdio.h>
#include<iostream>

using namespace std;
int s[1000];
int main()
{
    int num;

    printf("enter the decimal number");
    scanf("%d", &num);

    int z=num, top=0;

    while(z!=0)
    {
        int rem=z%2;
        s[top]=rem;
        top++;
        z=z/2;
    }
    for(int j=top-1; j>=0; j--)
    cout<<s[j];

    return 0;
}
