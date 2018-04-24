#include<iostream>
using namespace std;
int ls(int *a ,int n, int num)
{
   ///base case
   if (n==0)
   {
       return -1;
   }
   int ls1 = ls(a+1,n-1,num);
   ///rec case
   if(ls1 == -1)
   {
       if(a[0]==num)
       {
           return 0;
       }
       else
       {
           return -1;
       }
   }
   return ls1 +1;

}
int main()
{
    int a[]={1 ,6 , 6 , 7,6,4,6,7,8,9,6,5,6,7,8,10};
    int n =sizeof(a)/sizeof(int);
    int num = 6;
    int b =ls(a,n,num);
    cout<<b<<endl;
    return 0;
}
