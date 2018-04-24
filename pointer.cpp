#include<iostream>
using namespace std;
int *pointer()
{
    int a[10]={1,2,3};
    cout<<a;
   return a;
}
int main()
{
    int  *b=pointer;
     cout<<b;
    return 0;
}
