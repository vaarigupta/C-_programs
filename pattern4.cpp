#include<iostream>
using namespace std;
int main()
{
/* input-5
  1
   2   2
   3   0   3
   4   0   0   4
   5   0   0   0   5 */

    int n;
    cin>>n; ///n denotes range of rows
    for(int i=1;i<=n;i++) ///i denotes no of rows
    {
        for( int j=1;j<=i;j++) ///no of elements in each rows
        {
            if(j=1)
            {
                cout<<i<<"   ";
            }
            for(int k=2;k<=i-1;k++) ///printing 0s
            {
                cout<<"0"<<"   ";
            }
            if(j=i)
            { if(i>1)
                cout<<i<<"   ";
            }

            cout<<endl;
        }
    }
    return 0;
}
