#include<iostream>
using namespace std;


int main()
{ int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

     for(int i=0;i<(n-1);i++)
     {
         for(int j=0;j<(n-1-i);j++)
         { if(a[j]>a[j+1])
         {
             swap(a[j],a[j+1]);
         }

         }
     }
     for(int k=0;k<n;k++)
     {
         cout<<a[k]<<" ";
     }

    return 0;
}
