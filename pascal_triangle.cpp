#include<iostream>
using namespace std;
int fact(int n)
{
    int ans=1;
    for (int i =1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int ncr(int n,int r)
{
    int ans= fact(n)/(fact(r)*fact(n-r));
    return ans;
}
void pascal_tri(int n)
{
    for(int i=0;i<n;i++)
  { for(int j=0;j<=i;j++)
   {cout<<ncr(i,j)<<" ";
   }
   cout<<endl;
   }

}
int main()
{ pascal_tri(5);
}
