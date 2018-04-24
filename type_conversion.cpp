#include <iostream>
using namespace std;
int main ()
{
    int x=65;
    cout<<(char)x<<endl; ///explicit type conversion
    ///we convert type intentionally not due to any operand and operator
    char y= 'B';
    cout<<(int)y<<endl;
    y=y+300; ///here due to "+" operator , 300 is added to ascii value of y(B)
    cout<<y<<endl; /// due to wrap around y= n is printed
    cout<<(int)y<<endl; ///ascii value of n

    cout<<"enter two numbers";
    int a, b;
    cin>>a>>b;
    int c;
    c=a+b;
    cout<<"sum = "<<c<<endl;
}
