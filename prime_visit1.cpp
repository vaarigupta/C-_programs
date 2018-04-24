///using pre - computation method
#include<iostream>
using namespace std;
int a[1000000]={0};
bool check_prime(int n)
{
    int i=2;
    while(i*i<=n)
    {
        if(n%i==0)
            return false;
        i++;
    }
    return true;
}
void total_prime(int range)
{
    int i=2;
    while(i<range)
    {
        if(check_prime(i))
            a[i]=a[i-1]+1;
        else
            a[i]=a[i-1];
        i++;
    }
}
int main()
{
    int ans,n,c,d,range=1000000;
    total_prime(range);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c>>d;
        ans=a[d]-a[c-1];
        cout<<ans<<endl;
    }
    return 0;
}
