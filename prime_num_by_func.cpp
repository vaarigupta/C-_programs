#include<iostream>
using namespace std;
void prime_num(int n)
{ int i;
    for( i=2; i<n;i++)
{ if(n%i==0)
    { cout<<"not prime";
        break;
    }

}
if(n==i)
    {
        cout<<"prime";
    }


}
int main ()
{
  int num;
  cin>>num;
  prime_num(num);
    return 0;
}
