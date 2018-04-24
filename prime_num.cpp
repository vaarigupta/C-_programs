#include <iostream>
using namespace std;
int main()
{
    int range; /// range of the numbers  ( last no.)
    cin>>range;
    int i;/// current number
    for ( i=2; i<=range;i++)
    { int j;///checking of divisibility from 2 to i-1
        for ( j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }

        }
        if(j==i)
        {
            cout<<i<<" ";
        }

    }


return 0;
}
