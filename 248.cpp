#include <iostream>
#include <algorithm>

using namespace std;


int a[100005], temp[100005];

int main() {


	int n;
	cin>>n;


	int flag=1;
	long long int max=0;

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]>max)
		max=a[i];

		else
		flag=0;
	}

    if(flag)
	{
		cout<<"yes"<<endl<<1<<" "<<1<<endl;
		return 0;
	}

	flag=1;

	int start, endi;

	long long int min = a[0];
	for(int i=1; i<n; i++)
	{
		if(a[i]<min)
		min=a[i];

		else
		flag=0;
	}

	if(flag)
	{
		cout<<"yes"<<endl<<1<<" "<<n<<endl;
		return 0;
	}

    flag=1;

	int f=1, num=0, j=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]<a[i-1])
        {
        start=i-1;
        break;
        }
    }
	for(int i=0; i+1<n; i++)
	{
		if(a[i+1]<a[i])
		{
            if(f==1)
            {
                temp[j]=a[i];
                j++;
            }

            temp[j]=a[i+1];
            j++;

            f++;
        }
        if(f>1 && a[i+1]>a[i])
        {
        break;
        }
	}
    sort(temp, temp+j);

    int k=0;
    for(int i=start; i<start+j; i++)
    {
        a[i]=temp[k];
        k++;
    }

    for(int i=0; i+1<n; i++)
    {
        if(a[i]>a[i+1])
        {
        flag=0;
        break;
        }
    }
    endi=start+j;

	if(flag)
	{
		cout<<"yes"<<endl;
		cout<<start+1<<" "<<endi<<endl;
	}

	else
		cout<<"no"<<endl;
	return 0;
}
