#include<iostream>
using namespace std;
float squareroot(int no, int p)
{
    int s=0,e=no;
    int mid;
    float ans;
    while(s<=e)
    {
        mid=(s+e)/2;
        if((mid*mid)==no)
        {
            ans=mid;
            break;
        }
         if((mid*mid)<no)
        {
             s=mid+1;
             ans=mid;
        }
        else
        {
          e=mid-1;

        }

    }
    float inc=0.1;
    for(int i=0;i<p;i++)
        {
            while((ans*ans)<no)
            {
                ans=ans+inc;
            }
        ans=ans-inc;
        inc=inc/10;
        }

    return ans;

}
int main()
{ int n, p;
    cin>>n>>p;
    cout<<squareroot(n,p);
    return 0;
}
