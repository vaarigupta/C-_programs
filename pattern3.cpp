#include <iostream>
using namespace std;
int main()
{  /*
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
********* */
cout<<"*********"<<endl; /// first part of the pattern
int n=4;
int i=0;
for(;i<n;i++)
{
    for(int j=4;j>i;j--)
    {
        cout<<"*";
    }
    for(int k=0;k<((2*i)+1);k++)
    {
        cout<<" ";
    }
    for(int j=4;j>i;j--)
    {
        cout<<"*";
    }
    cout<<endl;
}
/// second part of the pattern
int space =5;
for (int j=2;j<=n;j++)
{
    for(int k=1;k<=j;k++)
    {
        cout<<"*";
    }
    for(int l=1;l<=space;l++)
    {
        cout<<" ";
    }
    space =space -2;
    for( int m=1;m<=j;m++)
    {
        cout<<"*";
    }

    cout<<endl;
}
cout<<"*********";
    return 0;
}
