#include <iostream>
using namespace std;
int main ()
{ int i=0;
int num,p;
cin>>num>>p;/// p denotes the decimal values required
 while (i*i<=num)
 {
     i=i+1;
 }
 float ans ;
 ans=i-1;
 ///i-1 taken because loop stops running only when i*i>num
 ///so final value of i is not the ans so we calculate i-1
 float inc=0.1; /// increment added to the num
 int decimal=1; ///current decimal position
 while(decimal<=p)
{
    while(ans*ans<=num)
   {
   ans =ans+inc;
   }
   ans =ans-inc;
 inc=inc/10; ///go to the next decimal value
  decimal=decimal +1 ;
}
cout<<ans<<endl;
    return 0;

}
