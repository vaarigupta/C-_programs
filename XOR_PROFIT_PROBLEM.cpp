#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int profit=-1;
    while(x<=y)
    { int final_profit = x^y;

        if(final_profit>profit)
        {
            profit= final_profit;
        }
        x++;
    }
    cout<<profit;
}
