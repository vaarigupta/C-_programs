#include<iostream>
using namespace std;

int pivotelement(int a[], int n)
///to find out the pivot element (highest element) in the sorted rotated array
{
    int s=0, e=n-1;
    int mid;
    while(s<=e)
    { mid=(s+e)/2;
        if( mid>s && a[mid]<a[mid-1])
        {
            return mid-1;
        }
        if( mid<e && a[mid]>a[mid+1])
        {
            return mid;
        }
        if(a[mid]<a[s])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
}
int main()
{
int a[]={7,1,2,3,4,5,6};;///this is a sorted rotated array
int n =sizeof(a)/sizeof(int);

  cout<<pivotelement(a,n);

    return 0;
}
