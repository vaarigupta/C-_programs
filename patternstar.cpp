#include<iostream>
using namespace std;
void star (int n,int i)
{
    for(int j=0;j<(n-i);j++)
         {
             cout<<"*";
         }
}
void star1(int n,int i)
{
     for(int j=0;j<(i+2);j++)
     {
         cout<<"*";
     }

}
void star2(int n)
{
   for(int i=0;i<((2*n)+1);i++)
    {
        cout<<"*";
    }
}
int main()
{
    int n;
    cin>>n;
     star2(n);

    cout<<endl;

     for(int i=0;i<n;i++)
     {
         star (n,i);

         for(int k=0;k<((2*i)+1);k++)
         {
             cout<<" ";
         }
         star(n,i);
         cout<<endl;
     }
///separation
int space = (2*n)-3 ;
     for(int i=0;i<(n-1);i++)
     {
     star1(n,i);
     for(int j=0;j<space;j++)
     {
         cout<<" ";
     }
     space = space -2;
     star1(n,i);
     cout<<endl;

     }
     star2(n);


    return 0;
}
