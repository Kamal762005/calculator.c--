#include<iostream>
using namespace std;
void even_odd(int );
int main()
{
	int a;
	cout<<"enter a number : "<<endl;
	cin>>a;
	even_odd(a);
	return 0;
}
void even_odd(int n)
{
	if(n==0)
		cout<<"0 is neither even nor odd \n";
	else if(n%2==0)
        cout<<"the number "<< n<<" is even number"<<endl;
    else
        cout<<"the number "<< n<<" is odd number"<<endl;
}
