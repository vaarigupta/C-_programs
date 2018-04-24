#include <iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=10)
    {
       if(i==8)
       {i++;
           continue;///in this case when i=8; then it will inc by 1
           ///and continue statement gets unaffective
           ///due to which ,8 gets skipped for printing
       }
       cout<<i<<" ";
       i++;

    }
    return 0;
}
