#include<iostream>
using namespace std;
 int lowerbound(int a[],int n,int key)
 {   int s=0, e=n-1;
     int mid;
     int ans=-1;
     while(s<=e)
    { mid =(s+e)/2;
    if (a[mid]==key)
    {
        ans=mid;
        e=mid-1;

    }
    else if(a[mid]>key)
    {
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
     }
     return ans;

 }




int main()
{  int a[]={1,2,2,2,2,3,3,3,4};
int n=9;
int key;
cin>>key;

    int ans=lowerbound(a,n,key);
    cout<<"the first occurance of key is "<<ans;
    return 0;
}
