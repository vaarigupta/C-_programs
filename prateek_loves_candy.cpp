#include<iostream>
using namespace std;
bool isprime(int n) ///check a no is prime or not
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;

}
int prime[1000000]={0}; ///an array of size 1000000
void genprime( int range ) /// to generate an array of prime no from 1 to 1000000
/// this func is used to store all the primes till range
{


 prime[0]=2;
int j=1;
    for(int i=3;i<=range;i=i+2)
        ///iterating over only odd number starting from 3
    {
        if(isprime(i))
        {
            prime[j]=i;
            j++;
        }
    }
}

int main()

{
  int range=1000000;
  ///precomputation
genprime(range);

int t;/// t is for queries that user will give as input or test cases
cin>>t;
int n;

 for(int i=0;i<t;i++)
 { cin>>n;
 cout<<prime[n-1]<<" ";

 }


    return 0;
}
