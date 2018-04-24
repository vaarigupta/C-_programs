#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
cout<<"1";
    for (int i=1;i<=n;i++) ///i used for printing rows
    {
        for(int j=1;j<=i;j++) ///j used for printing elements in each row
        {
            {if(j=1)
          if(i!=1)
       {
         cout<<i-1;
       }
          }

           for(int k=2;k<i;k++)
           {
               cout<<"0";
           }

          {
              if((j=i)&&(i>1))
            {cout<<i-1;}
          }
           }
cout<<endl;
        }

         return 0;
    }


