#include<iostream>
using namespace std;
int unique_no(int *a,int n)
{ int bit[64]={0};
    for(int i=0;i<n;i++)
    { int j=0;
      int no=a[i];
      while(no>0)
      {
          int ans =no&1;
          bit[j]= ans;
          j++;
          no =no>>1;
      }

    }
    int uniq=0,p=1;
    for(int k=0;k<64;k++)
    {
       bit[k]%3;
       uniq+= bit[k]*p;
       p=p<<1;

    }
    return uniq;

}
int main()
{ int n;
cin>>n;
int a[100000];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<unique_no(a,n);
    return 0;
}

