#include<iostream>
using namespace std;
int main()
{
   int n, height[20]={0}, k=1,left_ht[20]={0},right_ht[20] ={0}, current_height, sum=0;
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
current_height =height[n-1];
int j=n-2;
 right_ht[n-1]=height[n-1];
for(int i=n-1;i>=0;i--)
{
    if(height[i]>current_height&&i!=(n-1))
    {
       current_height =height[i];
    }
     right_ht[j+1]= current_height;
       j--;
}
for(int i=0;i<n;i++)
{  int x =  min(left_ht[i],right_ht[i]);
    sum = sum + (x - height[i]);
}
  cout<<sum;
    return 0;
}

