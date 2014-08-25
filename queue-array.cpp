//Queues as array

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int front=-1;
int rear=-1;
int n;
void push(int Q[], int x)
{
    if(rear>=n-1)
    {cout<<"Over flow\n";
    return;
    }

    else
    {
        if(front==-1)
        {
        front=rear=0;
        Q[rear]=x;
        }
        else
        {
            rear++;
            Q[rear]=x;
        }
    }
}

void deq(int Q[])
{
    if(front==-1)
    {
        cout<<"Uder flow\n";
        return;
    }

    else
    {
        if(rear==0)
        {
            Q[rear]=0;
            front=rear=-1;
        }
        else
        {
            Q[front]=0;
            front++;
        }
    }
}

void dis(int Q[])
{
    if(front==-1)
    {
        cout<<"Underflow\n";
        return;
    }
    else
    {
        cout<<endl;
        for(int i=front; i<=rear; i++)
        cout<<Q[i]<<" "<<endl;
    }
}
int main()
{
    int Q[100];

    printf("enter the number of elements : ");
    scanf("%d", &n);

    int ch, x;
    do
    {

    printf("Choose : \n 1. Push \n 2. Dequeue \n 3. Display \n 4. Exit \n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1 :
                    printf("Enter the element\n");
                    scanf("%d", &x);

                    push(Q, x);

                    break;
        case 2:
                    deq(Q);
                    break;
        case 3:
                    dis(Q);
                    break;

        case 4:
                    exit(0);
                    break;

    }

    }while(ch!=4);
}
