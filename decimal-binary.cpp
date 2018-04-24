#include<iostream>
using namespace std;
int main ()
{
    int no;
    cin>>no;
    int rem;
    while (no>0)
    {
         rem= no%2;
        cout<<rem;
        no=no/2;
    }
    return 0;
}
