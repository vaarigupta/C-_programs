#include<iostream>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        { return false;

        }
    }
    return true;
}
void print_prime(int range)
{

    for(int i=2;i<=range;i++)
    {
        if(isprime(i))
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
