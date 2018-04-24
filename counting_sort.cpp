#include<iostream>
using namespace std;
int main()
{ int a[20]={0},n, max_no = -1,range,count =0;
cout<<"Total number of elements to be entered";
cin>>n;
cout<<"Enter the number of elements";
for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]>max_no)
    {
        max_no = a[i];
    }
}
 range = max_no;
 int *b = new int[max_no];
for(int i=0;i<=range;i++)
{

    for(int k=0;a[k]!=range;k++)
    {
        if(a[k]==i)
        {
            count++;
        }
    }
    b[i]=count;
}
int sum =0;
for(int i=0;i<max_no;i++)
{
    sum += b[i];

}
for(int i=0;i<sum;i++)
{
   for(int j=0;j<b[i];j++)
   {
       cout<<i<<endl;
   }
}
    return 0;
}
