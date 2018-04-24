#include<iostream>
using namespace std;
int gcd(int a ,int b)
{
 int rem = a/b;
   if(b=0)
   {
      return a;
   }
   int ans = gcd(b,rem);
   return ans;

}
int main()
{
    int a ,b;
    cin>>a>>b;
    if(a==0&&(b!=0))
    {
        cout<<b;

    }
    else if (b==0&&(a!=0))
    {
        cout<<a;
    }
    else
    {
    int ans =gcd(a,b);
    cout<<ans;
    }

    return 0;
}
