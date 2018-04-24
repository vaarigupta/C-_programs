#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;/// n denotes no of cars

    int no;

    for(int i=1;i<=n;i++)
    {  cin>>no;
       int sum_odd=0;
       int sum_even=0;

        for(int k=no;k>0;k=k/10)
        {  int digit =k%10;
        if(digit%2==1)
        {
            sum_odd+=digit;
        }
        else
        {
            sum_even+=digit;
        }

        }
        if(sum_odd%3==0||sum_even%4==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No";
        }

        }
  return 0;
}
