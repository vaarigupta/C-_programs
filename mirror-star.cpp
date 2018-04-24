#include<iostream>
using namespace std;
int main()
{
    /* the following pattern is


      *
    * * *
  * * * * *
    * * *
      *


      */

      int n;
      cin>>n;
      int r= n/2 +1;
      if(n%2==1)
      {///first part
      for(int i=1;i<=r;i++)
      {
          ///spaces
          for(int s=1;s<=(r-i);s++)
          {
              cout<<"  ";
          }
          ///stars
          for(int j=1;j<=((2*i)-1);j++)
          {
              cout<<"*"<<" ";
          }
          cout<<endl;
      }
      ///second part
      for(int i=n;i>r;i--)
      {
          ///spaces
          for(int s=n;s>=i;s--)
          {
              cout<<"  ";
          }

          for(int j=n+1;j<((2*i)-1);j++)
          {
              cout<<"*"<<" ";
          }

          cout<<endl;
      }
      }
    return 0;
}
