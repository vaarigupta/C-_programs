#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin>>n1>>n2;
    int ans , count=0, i=1;
     while(count<n1)
     {
         ans =(3*i)+2;
         if(ans%n2==0)
         {
             i++;

         }
         else
         {
         cout<<ans<<endl;
         i++;
         count++;
         }
     }




   return 0;
}
