#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for( i=2;i<n;i++)
    { if(n%i==0)
     {cout<<"not prime";
     return 0;
     }

    }
    if(n==i)
    {
        cout<<"prime";
    }

}
