#include<iostream>
using namespace std;
int main()
{
    int n ,a;
    cin>>n;
    a=n;
    for(int i=n;i>=0;i--)
    {
        for(int k=0;k<(n-i);k++)
        {
            cout<<" ";

        }
        for(int j=i;j>=0;j--)
        {
            cout<<j<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<" ";
        }

        cout<<endl;
    }





    return 0;
}
