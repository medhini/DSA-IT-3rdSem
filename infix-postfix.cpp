#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

struct stack
{
    char data;
    stack*next;
}*ptr, *np, *save, *top;

class Stack
{
    public :
    void push(int x)
    {
        ptr = new stack;
        ptr->next=NULL;
        ptr->data=x;

        if(top==NULL)
        top=ptr;

        else
        {
            save=top;
            top=ptr;
            ptr->next=save;
        }
    }

    void pop()
    {
        if(top==NULL)
            cout<<"Underflow\n";

        else
        {
            ptr=top;
            top=top->next;
            delete ptr;
        }
    }

    char topp()
    {
    if(top!=NULL)
       { char ans = top -> data;
        return(ans);
        }
    else
        return('#');
    }

    int empty()
   {
     if(top==NULL)
       return(1);
     else
       return(0);
   }

};


int prec(char ch)
{

    switch (ch)
    {
        case '/': return(4);
        case '*': return(3);
        case '+': return(2);
        case '-': return(1);
        case '(': return(0);
        default: return(-1);
    }
}

void convert(string str)
{
    char post[100], c2;
    int pre;
    Stack s;
    int p=0;
    for(int i=0; i<str.length(); i++)
    {
        char ch=str[i];

        switch(ch)
        {

            case '(':
                    s.push(ch);
                    break;

            case ')':

                while((c2=s.topp())!='(')
                {
                    post[p++]=c2;
                    s.pop();
                }
               s.pop();
                break;
            case '+':
            case '-':
            case '/':
            case '*':

                    while(!s.empty() && prec(ch)<=prec(s.topp()))
                    {
                        post[p++]=s.topp();
                        s.pop();
                    }
                    s.push(ch);
                    break;
            default :
                    post[p++]=ch;
                    break;

        }
    }

    while(!s.empty())
    {
    post[p++]=s.topp();
    s.pop();
    }
    post[p]='\0';
    puts(post);
}
int main()
{
    string str;

    printf("Enter the infix expression : \n");
    cin>>str;

    convert(str);
}
