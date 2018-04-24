#include<iostream>
#include<cmath>
using namespace std;
int bin(int no)
{
    int ans=0,i=1,num=0;
    while(no >0)
    {
        ans = no%2;
        num = num + ans*i;
        no = no/2;
        i*=10;
    }
    return num;

}

int main()
{
    int t,x,y,a[32]= {-1},b[32]= {-1},j=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        int ans1 = bin(x);
        int ans2 = bin(y);

        while(ans1>0)
        {  int k=0;
            int no = ans1%10;
            a[k] = no;
            ans1 = ans1/10;
            k++;

        }
        while(ans2>0)
        { int k=0;
            int j = ans1%10;
            b[k] = j;
            ans1 = ans1/10;
            k++;

        }
        while(a[j]!=(-1)&&b[j]!=(-1))
        {
            if((a[j]==0)&&(b[j]==0))
            {
                cout<<(j+1);
                break;
            }
            j++;
        }


}
}
