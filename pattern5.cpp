#include<iostream>
using namespace std;
int main()
{ /*
                       1
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4 */
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) ///i for no of rows
    { for(int k=1;k<(n-i);k++)/// k for spaces
            {
                cout<<" ";
            }
        for( int j=1;j<((2*i)-1);j++) /// j for elements in each row
        { if(j<=i)
        {
            int no=1;
            cout<<no<<" ";
            no=no+j;
        }
        if((j>i)&&(j<((2*i)-1)))
        {
            int no=2;
            cout<<no;
            no=no-j;
        }


        }
        cout<<endl;

    }
}
