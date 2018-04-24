#include<iostream>
using namespace std;
void print_prime(int n)
{
 for(int i=2; i<=n;i++)
 { int j;
     for( j=2;j<i;j++)
     {
         if(i%j==0)
         {
             break;
         }

     }
     if(i==j)
         {
             cout<<i<<endl;
         }

 }
}
int main()
{
    int num;
    cin>>num;
    print_prime(num);
    return 0;
}
