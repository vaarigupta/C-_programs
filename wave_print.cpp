#include<iostream>
using namespace std;
int main()
{
   int a[10][10]={ {1,6,7,12} ,{2,5,8,11} ,{3,4,9,10} };
   int rows=3,cols=4,i=0,j=0;
   while(j<cols)
       {
         if(j%2==0)
         { for(int i=0;i<rows;i++)
         {
            cout<<a[i][j]<<" ";
         }

         }
         else
         {
             for(int i=rows-1;i>=0;i--)
             {
                 cout<<a[i][j]<<" ";
             }

         }
         cout<<endl;
         j++;

       }
    return 0;
}
