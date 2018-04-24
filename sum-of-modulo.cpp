#include<iostream>
using namespace std;
int fact(int n) ///to find out factorial
/// n denotes number of which factorial has to be calculated
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    int ans=0;
    int a[10];
    for(int i=1;i<=n;i++)
       { cin>>a[i];
       ans=ans +fact(a[i]);

       }
 int sum;
 sum=ans%107;

       cout<<sum;

}
