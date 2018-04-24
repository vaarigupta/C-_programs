#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100]={0};
    int max_no=-1,i;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
      if(a[i]>max_no)
      {
          max_no=a[i];

      }
    }
    cout<<max_no;

}
