#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
long long int s1, s2, s, c=0, num1, num2, ans=0;

printf("Enter the numbers\n");
scanf("%lld %lld", &num1, &num2);
int k=0;
while(num1>0 || num2>0 || c)
{
    s1=num1%10;
    s2=num2%10;

    num1=num1/10;
    num2=num2/10;

    s=(s1+s2+c)%2;

    c=(s1+s2+c)/2;

    ans=ans+s*pow(10,k);
    k++;
}

printf("%lld", ans);

return 0;
}
