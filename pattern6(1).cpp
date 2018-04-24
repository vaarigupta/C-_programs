#include <iostream>
using namespace std;
int main()
{
    int rows;
     cin>>rows; ///range of rows
     int number=1;
     for(int i=1;i<=rows;i++) /// i for no of rows
     {
         for(int j=1;j<=i;j++) ///j for no of elements in ith row
         {
             cout<<number<<" ";
             number++;
         }
         cout<<endl;
     }
}
