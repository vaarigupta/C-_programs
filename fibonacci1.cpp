#include<iostream>
using namespace std;
int main()
{
    int rows , first=0, second=1, ans;
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==0)
            {
                cout<<first<<" ";
            }
            if (i==1)
            {
                cout<<second<<" ";
                ans = first + second;
                cout<<ans;
            }
            if(2<rows)
            {
                ans = first + second;
                cout<<ans<<" ";
                first =second;
                second = ans;


            }

        }
        cout<<endl;
    }

}
