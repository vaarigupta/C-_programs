#include<iostream>
using namespace std;
void bubblesort( int *a, int n)
{
    for(int i=0;i<(n-1);i++)
    {
        for(int j=0;j<(n-1-i);j++)
        { if(a[j]>a[j+1])
        {
             swap(a[j], a[j+1]);

        }

        }
    }
}

void sum_triplet(int *a,int n,int target )
{
    bubblesort(a,n);
   for(int i =0;i<n;i++)
   {  int no =a[i];
        int j=1;
       int x=j+i;
        int y=n-1;
        while(x<y)
        {
            if((a[x]+a[y])==(target-no))
        {
            cout<<no<<" ,"<<a[x]<<" and "<<a[y]<<endl;
            x++;
            y--;
        }
        else if((a[x]+a[y])>(target-no))
        {
            y--;
        }
        else
        {
            x++;

        }
       }
       j++;
   }
}
int main()
{ int n;
cin>>n;
int a[1000];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int target;
cin>>target;

   sum_triplet(a, n, target);


    return 0;
}
