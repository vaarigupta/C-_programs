#include<iostream>
using namespace std;
int fact(int n)
{
    int ans =1;
    for(int i=1;i<=n;i++)
    {
       ans=ans*i;
    }
    return ans;
}
int ncr(int n, int r)
{ int ans= fact(n)/(fact(n-r)*fact(r));
    return ans;
}
void pascaltri(int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ncr(i,j)<<"    ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pascaltri(n);

  return 0;
}
