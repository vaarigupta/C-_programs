#include<iostream>
using namespace std;
int main()
{ int n,sum=0;
cin>>n;
while(n>0)
    {
        int rem = n%10;
        n = n/10;
        sum += rem;
        cout<<rem<<endl;

    }
    cout<<sum;


}

