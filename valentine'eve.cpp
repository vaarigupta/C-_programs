#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ,m, a[5000],b[5000],dif[5000];
     cin>>n>>m;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(int i=0;i<m;i++)
     {
         cin>>b[i];
     }
     int x = INFINITY,sum =0;
     for(int i=0;i<n;i++)
     {

        for(int j =0;j<m;j++)
        {
           dif[j] = abs(a[i]-b[j]);
           x = min(x,dif[j]);
           if(x == 0)
           {
               break;
           }

        }

         sum += x;

     }
     cout<<sum;


    return 0;

}
