#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1, rem,ans=0 ;
    while(n>0)
    {
        rem=n%10;
        ans = ans + (rem*i);
        i=i*2;
        n=n/10;
    }
    cout<<ans;
    return 0;
}
