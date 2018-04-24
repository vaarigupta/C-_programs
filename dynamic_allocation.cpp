#include<iostream>
using namespace std;
int *array(int n)
{ int a[10];
for(int i=0;i<n;i++)
{
    a[i]=i*i;
}
 return a;
}
int main()
{ int *a = new int;
int n;
cin>>n;
for(int i=0;i<n;i++)
{     a[i]=i*i;
    cout<<a[i]<<" ";
}
cout<<endl;
int *b = array(n);/// function is being called ,
///when func. is called,
///then local variable or compile time variable gets automatically deallocated
/// thats why garbage value is printed on console
for(int i=0;i<n;i++)
{
    cout<<b[i]<<" ";
}

    return 0;
}
