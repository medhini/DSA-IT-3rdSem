//Queue as linked list

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Q
{
    int data;
    Q *next;
}*front, *rear, *np, *save, *ptr;

class q
{
    public:
    void push(int x)
    {
        np=new Q;
        np->data=x;
        np->next=NULL;

        if(front==NULL)
        {
            front=np;
            rear=np;
        }
        else
        {
            rear->next=np;
            rear=np;
        }
    }

    void deq()
    {
        if(rear==NULL)
        {
            cout<<"Underflow\n";
            return;
        }
        else
        {
            ptr=front;
            front=front->next;
            delete ptr;
        }
    }
    void trav()
    {
        if(rear==NULL)
        {
            cout<<"Underflow\n";
            return;
        }
        else
        {
        ptr=front;
            while(ptr!=NULL)
            {
                cout<<ptr->data<<" ";
                ptr=ptr->next;
            }

            cout<<endl;
        }
    }
};
int main()
{
int ch, x;
q first;
    do
    {

    printf("Choose : \n 1. Push \n 2. Dequeue \n 3. Display \n 4. Exit \n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1 :
                    printf("Enter the element\n");
                    scanf("%d", &x);

                    first.push(x);

                    break;
        case 2:
                    first.deq();
                    break;
        case 3:
                    first.trav();
                    break;

        case 4:
                    exit(0);
                    break;

    }

    }while(ch!=4);
}
