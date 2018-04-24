#include<iostream>
using namespace std;
int main()
{  /*
                       1
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
            */
    int n;
    cin>>n;
  int number=0;
  for(int i=1;i<=n;i++)
    {
        for(int j=1;j<(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            number=number+k;
            cout<<number;

        }
        cout<<endl;
    }
}
