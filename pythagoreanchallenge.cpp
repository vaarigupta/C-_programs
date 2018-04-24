#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int n,no;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>no;
    int a=0;
    int b=sqrt(no);
    while(a<=b)
    {
       int ans =(a*a)+(b*b);
        if(ans==no)
        {
        cout<<"("<<a<<","<<b<<")"<<" ";
        a++;
        b--;
        }
        else if(ans>no)
        {
            b--;

        }
        else
        {
            a++;
        }
    }
cout<<endl;
 }


return 0;
}



