#include <iostream>
using namespace std;
int main ()
{    int rows;
      cin>>rows;
int i=1;/// i denotes the no of rows
int no;
while (i<=rows)
{ if (i%2==1)
{
    no=1;
}
else
{
   no=0;

}

   int j=1;/// j denotes the total no in each row which is equal to ith row
   while (j<=i)
   {
       cout<<no;
       no=1-no;
       j++;
   }
   cout<<endl;
   i++;


}


    return 0;

}
