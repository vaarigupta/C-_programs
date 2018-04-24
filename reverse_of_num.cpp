#include <iostream>
using namespace std;
int main()
{ int num;
  cin>>num;
  int i=1;
  for(;num>0;i++)
  { int rem =num%10;
  num=num/10;
  cout<<rem;
  }



    return 0;

}
