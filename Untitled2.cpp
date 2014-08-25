#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int n, m, min;
    cin>>n>>m;

	if(n<m)
	min=n;
	else
	min=m;

    if(min%2==0)
    cout<<"Malvika"<<endl;

    else
    cout<<"Akshat"<<endl;

    return 0;
}
