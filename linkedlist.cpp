#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct list
{
int info;
list *next;
};

list*ptr, *newptr, *start, *save;

list* create_new_node(int n)
{
ptr= new list;
ptr -> info=n;
ptr -> next=NULL;
return ptr;
}
void push(list*np)
{
    if(start==NULL)
        start=np;
    else
       {
        save=start;
        start=np;
        np -> next=save;
        }
}
void pop()
{
if(start==NULL)
    printf("Underflow!!\n");
else
    {
        ptr=start;
        start=start->next;
        delete ptr;
    }
}

void trav(list *np)
{
    while(np!=NULL)
    {
        cout<<np->info<<" ";
        np=np->next;
    }
    cout<<"\n";
}
int main()
{

start=NULL;

printf("Enter elements\n");

int x=1, add;

while(x)
{
scanf("%d", &x);
newptr=create_new_node(x);
push(newptr);
}
//trav(start);

printf("enter element to add : \n");
scanf("%d", &add);

newptr=create_new_node(add);
push(newptr);

trav(start);

pop();

trav(start);
return 0;
}
