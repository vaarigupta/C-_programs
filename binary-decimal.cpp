#include <iostream>
using namespace std;
int main()
{ ///binary to decimal
    int no;
    cin>>no;///no entered in binary
    int digit; ///digits extracted
    int p=1, ans=0;///pis the power of 2
    while (no>0)
    {
       digit=no%10;
       ans = ans + digit*p;
       p=p*2;
       no=no/10;///update condition
    }
    cout<<ans;
    return 0;
}
