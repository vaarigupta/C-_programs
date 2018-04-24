#include<iostream>
using namespace std;
int main()
{ int n,t,sum=0;
  cin>>t;
for(int i =0;i<t;i++)
{
    cin>>n;
    while(n>0)
    {
        int rem = n%10;
        n = n/10;
        sum += rem;

    }
//    while(sum>0)
//    {
//        int rem = sum%10;
//        sum = sum/10;
//        sum += rem;
//
//    }
    if(sum==7)
    {
        cout<<"Lucky"<<endl;
    }
    else
    {
        cout<<"Unlucky"<<endl;
    }
}

    return 0;
}
