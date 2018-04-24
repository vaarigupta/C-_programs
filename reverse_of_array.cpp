#include<iostream>
using namespace std;
int main()
{ int n;
cin>>n;
int a[1000];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int i=0,j=n-1;
while(i<j)
{
    swap(a[i],a[j]);
    i++;
    j--;

}
for(int k=0;k<n;k++)
{
    cout<<a[k]<<endl;
}
    return 0;
}
