#include<iostream>
using namespace std;
int *fun(int n)
{
    int *x = &n;
    return x;
}
int main()
{
int x=10;
int &y = x;///reference variable
cout<<"the value of y(reference variable) -> "<<y<<endl<<"the value of x ->"<<x<<endl<<endl;
cout<<" when a function returns a pointer(address of var-x)-> "<<endl<<fun(x)<<endl<<endl;
cout<<"Increment y by 1:"<<endl<<endl;
y++;
cout<<"the value of x is "<<x<<endl;
cout<<"the value of y(ref var) -> "<<y<<endl<<endl;
cout<<" when a function returns a pointer(address of var-x)-> "<<endl<<fun(x);
return 0;
}
