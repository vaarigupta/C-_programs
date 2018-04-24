#include<iostream>
using namespace std;
int main()
{
    ///print the hollow rhombus pattern
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int space=1;space<=(n-i);space++)
        {
            cout<<" ";
        }
         if(i==1||i==n)
         {
             for(int j=1;j<=n;j++)
             {
                 cout<<"*";
             }
         }
         else
         {
             for(int k=1;k<=n;k++)
             {
                 if(k==1||k==n)
                 {
                     cout<<"*";
                 }
                 else
                 {
                     cout<<" ";
                 }
             }
         }
        cout<<endl<<endl;
    }
    return 0;
}
