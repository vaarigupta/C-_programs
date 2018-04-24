#include<iostream>
using namespace std;
int len(char a[])
{
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{ char a[100];
cin.get(a,100);

cout<<len(a);
    return 0;
}
