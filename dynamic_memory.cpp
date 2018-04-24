#include<iostream>
using namespace std;
int *array(int n)
{ int *a = new int[n];
for(int i=0;i<n;i++)
{
    a[i]=i*i;
}
 return a;
}
int main()
{
    int x=10;
    int &y=x; /// &y is a reference variable to x
    /// similarly to the names and nicknames of person
    /// here x is also called &y
    cout<<x<<endl;
    cout<<y<<endl;
    int *a = new int;
int n;
cin>>n;
for(int i=0;i<n;i++)
{     a[i]=i*i;
    cout<<a[i]<<" ";
}
cout<<endl;
int *b = array(n);
for(int i=0;i<n;i++)
{
    cout<<b[i]<<" ";
}

    return 0;
}
