#include<iostream>
using namespace std;
/// sum of arrays
void sum( int a[],int n,int b[],int m, int c[])
{

    int i= n-1;
    int j=m-1;
     int carry=0;
    int k=0,s;
    while(i>=0&&j>=0)
    {
         s = a[i]+b[j]+carry;
        c[k] = s%10;
        carry = s/10;
        k++;
        i--;
        j--;


    }
    ///assuming array a has big length
    while(i>=0)
    { s = a[i]+carry;
      c[k] = s%10;
      carry = s/10;
      k++;
      i--;
    }
    /// if only carry is left then furthur cond will be proceeded
    if(carry==1)
    {
        c[k] = carry;
        k++;
    }
    for(int pos = k-1; pos>=0;pos--)
    {
        cout<<c[pos]<<" ,";

    }
    cout<<"END";


}
int main()
{
    int n,m;
  int a[1005],b[1005];
  int c[1005]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cin>>m;

    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    if (n>m)
    {sum(a,n,b,m,c);
    }
    else
    { sum(b,m,a,n,c);

    }
return 0;
}
