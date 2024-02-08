#include<iostream>
using namespace std;
int main()
{
    int i;
    float a,b;
    cout<<"Enter two operands : ";
    cin>>a>>b;
    cout<<"1.Addition,2.Subtraction,3.Multiplication,4.Division\nEnter your choice : ";
    cin>>i;
    switch (i)
    {
    case 1:
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<" \n";
        break;
    case 2:
        cout<<"Subtraction of "<<a<<" and "<<b<<" is"<<a-b<<" \n";
        break;
    case 3:
        cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<" \n";
        break;
    case 4:
        cout<<"Divison of "<<a<<" and "<<b<<" is "<<a/b<<" \n";
        break;
    default:
        cout<<"invalid operator\n";
        break;
    }
}