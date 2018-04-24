#include<iostream>
using namespace std;
void bubblesort(int *a, int n)
{
    for(int i=0;i<(n-1);i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
void sum_pair(int *a, int n, int target)
{
    bubblesort(a,n);
    int i=0,j=n-1;
    while(i<j)
    {
        if((a[i]+a[j])==target)
        {
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;

        }
        else if((a[i]+a[j])>target)
        {
           j--;
        }
        else
        {
            i++;
        }

    }


}

int main()
{ int n, target;
cin>>n;
int a[1000];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cin>>target;
sum_pair(a,n,target);
    return 0;
}
