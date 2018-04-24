#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first=0, second=1, next;

    for(int i=0;i<n;i++) ///i used to denote no of rows
    {
        for( int j=0;j<=i;j++)///j denotes no of elements
        {  if (i<=1)
        {
            next=i;
            cout<<next;
        }
        else {
                next=first+second;
        first=second;
        second=next;
        cout<<next<<" " ;

        }

        }
        cout<<endl;
    }
}
