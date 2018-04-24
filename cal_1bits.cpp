#include<iostream>
using namespace std;
int main()
{int num;
cin>>num;
for (;num>0;num/=2)
{
    int rem=num%2;

    if(rem==1)
    { int sum=0;
    sum= sum+rem;

        cout<<sum;
    }


}
    return 0;

}
