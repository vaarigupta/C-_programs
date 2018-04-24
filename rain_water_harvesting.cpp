#include<iostream>
using namespace std;
int main()
{
   int n, height[20]={0}, k=1,j=n-1,left_ht[20]={0},right_ht[20] ={0}, current_height, sum=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>height[i];
   }
   current_height = height[0];
    for(int i=0;i<n;i++)
    {
        left_ht[0]=height[0];
        if(height[i]>current_height&&i!=0)
        {
            current_height =height[i];

        }
        left_ht[k]=current_height;
        k++;
    }

 for(int i=0;i<n;i++)
        {
            cout<<left_ht[i]<<endl;;
        }
current_height =height[n-1];
for(int i=n-1;i>=0;i--)
{
     right_ht[n-1]=height[n-1];
    if(height[i]>current_height&&i!=(n-1))
    {
       current_height =height[i];
    }
     right_ht[j]= current_height;
       j--;

}
cout<<endl;
for(int i=0;i<n;i++)
        {
            cout<<right_ht[i]<<endl;;
        }

for(int i=0;i<n;i++)
{
    sum += min(left_ht[i],right_ht[i]) - height[i];
}
  cout<<sum;
    return 0;
}
