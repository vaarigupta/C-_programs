#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    int digit,i=0;
    cin>>digit;
    while(no>0)
    {
      int rem=no%10;
        if(rem==digit)
        {
            i++;
        }
        no=no/10;

    }

    cout<<i;




    return 0;
}
