#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    int a[]={0},n,i=0;
    n=sizeof(a)/sizeof(int);
     while(no>0)
     {
         int rem=no%10;
         a[i]=rem;
         i++;
         no=no/10;

     }
     for(int j=0;j<n;j++)
     {
         cout<<a[j];
     }


}

