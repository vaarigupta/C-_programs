#include<iostream>
using namespace std;
int upperbound(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==key)
        {
            ans=mid;
            s=mid+1;

        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else{s=mid+1;}
    }
    return ans;
}
int main()
{ int a[]={1,1,1,2,2,2,4,4,4,4,5,5,5};
int n= sizeof(a)/sizeof(int);
int key;
cin>>key;
int ans= upperbound(a,n,key);
cout<<"the upper bound of key is "<<ans<<endl;


    return 0;
}
