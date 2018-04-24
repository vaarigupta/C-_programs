#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<"found at index"<<i<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<key<<"is not present in the array";
    }
    return 0;
}
