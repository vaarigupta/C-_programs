#include<iostream>
using namespace std;
int linear_search(int *a,int n,int key)
{ int i=0;
     while(i<n)
     {
         if(a[i]==key)
         {
             return i;
         }
         else
         {
             i++;
         }
     }
     if(i=n)
     {
         return -1;
     }
}
int main()
{
   int n;
   cin>>n;
   int a[1000]={0};
   for(int i=0;i<n;i++)
   {
       cin>>a[i];

   }

    int key;
    cin>>key;
    cout<<linear_search(a,n,key);

    return 0;
}
