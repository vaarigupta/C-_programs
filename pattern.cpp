#include <iostream>
using namespace std;
int main()
{
    /*
    5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */

   int rows;
   cin>>rows;
   int i=1;
   int j;
   int count=1;
   while (i<=rows) ///i denotes the no of rows
   {
      j=1;
       while (j<=i) /// j denotes no of elements in the ith row =ith row
       {
           cout<<count<<" ";
          count++;
          j++;
       }

       cout<<endl;
       i++;
   }

   return 0;
}
