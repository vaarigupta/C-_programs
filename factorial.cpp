#include<iostream>
using namespace std;
int fact(int n)
{
    int i=1;
    while (i<=n)
    {
       n=n*i;
       i=i+1;
    }
    return n;
}
int main()
{ int a;
cin>>a;

    cout <<fact(a);
}
