#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d;///determinant
    float x, y; ///roots of quadratic equation
    d= (b*b)-(4*a*c);
    if(d>0)
    {
        cout<<"real and distinct"<<endl;
        x= ((-1*b)- sqrt(d))/(2*a);
        y= ((-1*b)+ sqrt(d))/(2*a);
        cout<<x<<" "<<y<<endl;


    }
    else if(d==0)
    {
        cout<<"real and equal"<<endl;
        x=y= (-1*b) /(2*a);
        cout<<x<<" "<<y<<endl;
    }
    else
    {
        cout<<"imaginary";
    }
    return 0;
}
