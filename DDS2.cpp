#include<stdio.h>
#include<iostream>
#include<map>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    char str[100], str2[100];
    long long int ans=0;

    int arr[200];

    int num1, num2;

    map <char, int> cmp;
    map <int, char> cmp1;

    cmp['A']=10;
    cmp['B']=11;
    cmp['C']=12;
    cmp['D']=13;
    cmp['E']=14;
    cmp['F']=15;


    cmp1[10]='A';
    cmp1[11]='B';
    cmp1[12]='C';
    cmp1[13]='D';
    cmp1[14]='E';
    cmp1[15]='F';

    printf("enter the number\n");
    scanf("%s", str);

    printf("enter the base\n");
    scanf("%d", &num1);

    printf("enter the base you want to convert to\n");
    scanf("%d", &num2);

    int k=0;

    int len=strlen(str);

    for(int i=len-1; i>=0; i--)
    {
        char ch=str[i];

        if(isalpha(ch))
        ans+=(pow(num1, k)*cmp[ch]);

        else
        ans+=(pow(num1, k)*(ch-48));

        k++;

    }

    k=0;
    while(ans>0)
    {
        arr[k]=ans%num2;
        ans=ans/num2;
        k++;
    }

    int j=0;
    for(int i=k-1; i>=0; i--)
    {
        if(arr[i]>=10)
            str2[j]=cmp1[arr[i]];

        else
            str2[j]=(char)(arr[i]+48);

        j++;
    }

    printf("Number in base %d is : %s", num2, str2);

    return 0;
}
