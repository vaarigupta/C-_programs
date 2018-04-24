#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev=0;
    for(;n>0;n=n/10)
    {
        int rem=n%10;
        rev=(rev*10)+rem;
    }
cout<<rev<<endl;
}
