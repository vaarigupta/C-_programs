#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    int ans=0,rem;

    while(no>0)
    {
        rem= no%8;
        cout<<rem;
        no=no/8;

    }


    return 0;
}
