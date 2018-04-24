#include <iostream>
using namespace std;
int main()
{ int num;
  cin>>num;
  int sum=0;
  for (int i=1; num>0;i++)
  {    sum= sum+ (num&1); ///when we have to print any summation then we always
  ///need to initialise a variable with 0, and that summation to the
  ///initialised variable n print sum through loop
         num= num>>1 ;

  }


cout<<sum;
  return 0;
}
