#include<stdio.h>
#include<iostream>

using namespace std;
int n, s[1000];
void push(int s[], int &top, int val)
{
    if(top==n)
    cout<<"Overflow\n";
    else
    {
    top++;
    s[top]=val;
    }
}

void pop(int s[], int &top)
{
    if(top==-1)
    cout<<"Underflow\n";
    else
    top--;
}

void trav(int s[], int &top)
{
    int t=top;
    while(t>0)
    {
        cout<<s[t]<<" ";
        t--;
    }

    cout<<"\n";
}
int main()
{
int top=0;

printf("Enter maximum number of elements\n");
scanf("%d", &n);

printf("Enter the elements : \n");

int x=1;

while(x)
{
scanf("%d", &x);
if(x!=0)
push(s,top,x);
}

cout<<"Deleting \n";

pop(s, top);

cout<<"Displaying\n";

trav(s, top);

return 0;
}
