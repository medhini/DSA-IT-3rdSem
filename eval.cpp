#include<iostream.h>
#include<stdio>

using namespace std;


struct stac
{
    char data;
    stac *next;
}ptr, *np, *save, *top;

class Stac
{
    public:

    void push(char x)
    {
        np=new stac;

        np->data=x;
        np->next=NULL;

        if(top==NULL)
        {
        top=np;
        }
        else{

        save=top;
        top=np;
        np->next=save;
        }
    }

    char pop()
    {
    char ans;
        if(top==NULL)
        return('#');

        else
        {
            ptr=top;
            ans=ptr->data;
            top=top->next;
            delete ptr;
        }

        return(ans);
    }

    char top

}

int prec(char a)
{
    switch(a)
    {
        case '^': return 5;
        case '/': return 4;
        case '*' : return 3;
        case '+' : return 2;
        case '-' : return 1;
        case '(' : return 0;
    }
}

void eval(string infix)
{
    Stac val, op;

    for(int i=0; i<infix.length(); i++)
    {
        char z=infix[i];
        char c2;
        if(z>='0' && z<='9')
            val.push(z);

        else
            {
                    switch(z)
                    {
                    case '(' : op.push(z);
                    break;
                    case ')' :
                        while(!op.empty() && c2 = op.pop()!=')')
                        {
                            calc(val, op);
                        }
                        break;
                    default :
                        while(!op.empty() &&prec(c2=op.pop())>=prec(ch))
                            cal(val,op);

                    op.push(ch);

                    break;
                    }
            }

    }

    while(!op.empty()){
		cal(val,op);
	}

	char ans = val.pop();
	int x = ans - '0';
	cout<<x<<endl;
}
int main()
{
    string str;

    printf("Enter the expression to evaluate\n");
    cin>>str;

}
