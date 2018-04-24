#include<iostream>
using namespace std;
int a[1000000]={0};
bool isprime(int n)
{ int i=2;
    while((i*i)<=n)
    {
        if(n%i==0)
        {
            return false;
        }
        i++;
    }
    return true;
}
int gen_prime(int range)
{
    for(int i=2;i<range;i++)
    {
        if(isprime(i))
        {
            a[i]=a[i-1]+1;
        }
        else
        {
            a[i]=a[i-1];
        }
    }





}

int main()
{ int n,x,y,ans,range=1000000;
gen_prime(range);
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>x>>y;
    ans=a[y]-a[x-1];
    cout<<ans;

}
    return 0;
}
