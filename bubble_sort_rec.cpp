#include<iostream>
using namespace std;

int bubble( int *a , int n)
{
   if(n==1)
   {
    return 0;
   }
   for(int j=0;j<(n-1);j++)
   {
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
   }
   bubble(a,n-1);

}
int bubble1(int *a ,int j, int n)
{

    if(n==1)
    {
        return 0;
    }
    if(j== n-1)
    {
        return bubble1(a ,0,n-1);
    }
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
    return bubble1(a ,j+1,n);
}
int main()
{  int a[]={1 , 7, 8,4,9,10 , 8, 10 , 7, 12, 13};
   int n = sizeof(a)/sizeof(int);
//   bubble(a,n);
//   for(int i=0;i<n;i++)
//   {
//       cout<<a[i]<<" ";
//   }
   bubble1(a , 0 , n);
    for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

    return 0;
}
