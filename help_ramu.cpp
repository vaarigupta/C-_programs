#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t, c1,c2,c3,c4,n,m;
    /// n - no of rickshaws and m - no of cabs
    int rick[1005],cab[1005]; /// these arrays store the no of rides by each rickshaws and cabs
    cin>>t;
    while(t>0)
    {
        cin>>c1>>c2>>c3>>c4>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>rick[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>cab[i];
        }
        int rick_cost =0;
    for(int i=0;i<n;i++)
    {
        rick_cost += min(c1*rick[i],c2);
    }

     rick_cost += min(rick_cost, c3);

     int cab_cost =0;
     for(int i=0;i<m;i++)
     {
         cab_cost += min(c1*cab[i],c2);
     }
     cab_cost += min(cab_cost,c3);
        int final_ans = min(c4, rick_cost + cab_cost);
        cout<<final_ans<<endl;
       t--;
    }
}
