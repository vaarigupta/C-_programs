#include<iostream>
using namespace std;
void check_seq(int n, int no)
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>no;
    }
    for(int j=n;j>0;j--)
    {
        no--;

    }
}
int main()
{  int n,no;
    check_seq(n,no);
    return 0;
}
