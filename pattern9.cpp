#include <iostream>
using namespace std;
int main()
{ /*
                       1           1
                       1 2       2 1
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1

    */

     int rows;
cin>>rows;
int num=1;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int k=5;k>num;k--)
        {
            cout<<"  ";

        }
        num=num+2;
        for(int m=1;m<=i;m++)
        { if(m!=4)
            {cout<<m<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}
