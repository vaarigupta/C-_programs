#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int i=1;
    int ans=1;
    while (i<=b)
    {
        ans=ans*a;
        i++;
    }
    cout<<ans;
    return 0;
}
