#include<iostream>
using namespace std;

bool isprime(int n)
{
    int i=2;
    while(i*i<=n)
    {
        if(n%i==0)
        {
        return false;
        }
        i++;
    }
    return true;

}
int main()
{
    int num;
    cin>>num;
    if (isprime(num))
    {
        cout<<"number is prime";
    }
    else
    {
    cout<<"not prime";
    }
///we can also write ->
///cout<<isprime(num);
///result will be in 0s n 1s
/// 1 for true value and 0 for false value
return 0;
}
