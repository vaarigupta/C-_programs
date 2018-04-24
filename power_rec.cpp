#include<iostream>
using namespace std;
int power(int x, int y)
{
   ///base case
   if (y==1)
   {
       return x;
   }
   ///rec case
   int ans = x *power(x ,y-1);
   return ans;

}
int main()
{
 int p = power(5 , 3);
 cout<<p<<endl;
}
