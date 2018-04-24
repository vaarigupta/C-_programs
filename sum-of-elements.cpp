#include<iostream>
using namespace std;
int sum(int *a, int n)
{
    int s=0, i=0;
    for(;i<n;i++)
       {

        s= s+ a[i];
       }
    return s;
}
int main()
{
    int a[10]={1,2,3,4,5};


     cout<<sum(a,5)<<endl;
     cout<<sum(a+1,5)<<endl;
     cout<<a<<endl;/// gives the address of first element
     cout<<&a<<endl;/// gives the address of first element
     cout<<&a[0]<<endl;/// gives the address of first element
     cout<<a[0]<<endl;
     cout<<a[1]<<" "<<a[2]<<" "<<endl; /// gives the address of second n third element bcz we used '&'
     /// if we don't write '&' before the a[index] , then it gives the simply the element at that index
     ///so for getting address of an array an its element , we always require '&'
     cout<<sizeof(a);///  gives th total bytes = no of elements*(4/8bytes){ according to the system}

        return 0;
}
