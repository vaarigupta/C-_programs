#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    int i=2;
    while (i<a)
        {
            if (a%i==0)
            {
                cout<<a<<" is not prime";
                return 0;
            }
            i++;

        }
        ///if we come out of this loop then the no is prime
        cout<<a<<"is prime";


    return 0;
}
