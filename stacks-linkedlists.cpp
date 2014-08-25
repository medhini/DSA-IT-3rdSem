#include<iostream>
#include<stdio.h>

using namespace std;

struct stack
{
int info;
stack * next;
};
stack *ptr, *top, *save, *newptr;

stack* create_new_node(int val)
{
    ptr = new stack; //IMPORTANT!!!!!!!!! MEMOR ALLOCATION!
    ptr->info=val;
    ptr->next=NULL;

    return ptr;
}

void display(stack *np)
{
    while(np!=NULL)
    {
        cout<<np->info<<" ";
        np=np->next;
    }
    cout<<endl;
}

void push(stack *np)
{
if(top==NULL)
    top=np;

else
{
save=top;
top=np;
np->next=save;
}
}

void pop()
{
if(top==NULL)
    cout<<"underflow\n";
else
{
    ptr=top;
    top=top->next;
    delete ptr;
}
}
int main()
{
int x=1;
top=NULL;
printf("Enter the elements\n");

while(x)
{
cin>>x;
if(x!=0)
{
newptr=create_new_node(x);
push(newptr);
}
}
display(top);

printf("Deleting\n");

pop();

display(top);

return 0;
}
