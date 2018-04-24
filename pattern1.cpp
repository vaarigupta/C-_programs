#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

/* input-7
1
11
111
1001
11111
100001
1111111*/


     for(int i=1;i<=n;i++)
     {
         if(i%2==1)
         {
             for(int j=1;j<=i;j++)
             {
                 cout<<"1";
             }
             cout<<endl;
         }


         else
         {
             for(int k=1;k<=i;k++)
             {
                 if(k=1)
                 {
                     cout<<"1";
                 }
                 for(int l=2;l<i;l++)
                 {
                     cout<<"0";
                 }
                 if(k=i)
                 {
                     cout<<"1";
                 }
                 cout<<endl;
             }
         }
     }
     return 0;
}
