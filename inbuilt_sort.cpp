#include<iostream>
#include<algorithm>
bool compare(int a, int b) /// it behaves as a condition for sorting
{
    return a>b;
}
using namespace std;
int main()
{  int a[]={1,4,3,2,5,7,6};
   int n=sizeof(a)/sizeof(int);
   sort(a,a+n,compare);/// compare is an optional parameter to this sort function called comparator
   /// comparator are those func which tells the sort function how to sort and in which order
   ///moreover ,it manipulates the sorting algorithm
   ///it is passed as a pointer to this function
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

    return 0;
}
