#include<iostream>
using namespace std;
int main()
{ int t,n,a[10000]={1},sum=0;
   cin>>t;
   for(int i =1;i<=t;i++) /// t -no of test cases
   {
       cin>>n;
       for(int j=2;j<=n;j++) /// j - no of days
       {
           for(int k =j;k<=n;k =k*j) /// k - no of jars
           {
              a[k] = 0;
           }
       }
       for(int m=0;m<n ;m++)
       {

           sum += a[m];
       }
       cout<<sum<<endl;
   }
    return 0;
}
