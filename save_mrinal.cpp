#include<iostream>
using namespace std;
int main()
{ int n,a[30005], b[200000],c[200000];
cin>>n; /// no of elements in series
  for(int k=1;k<=n;k++)
  {
      cin>>a[k];
  } /// elements in the series
  int mq;
  cin>>mq; /// no of queries
  for(int k=1;k<=mq;k++)
  {
      cin>>b[k]>>c[k];
  } /// each query contain a pair of (i,j)
  int k=1, count=1;

  while(mq!=0)
  {
      while(b[k]!=c[k])
      {
          if(a[b[k]]!=a[b[k+1]])
          {
              count++;
          }
          b[k]++;

      }
     cout<<count<<endl;
      k++;
      mq--;
  }











    return 0;
}
