#include<iostream>
using namespace std;
int fact(int n)
{
    int i;
    int ans=1;/// the one has to be return should be initialised
    /// outside the loop here 'ans=1' must be initialised outside not within the loop
    for(i=1;i<=n;i++)
    {
    ans = ans*i;
    }
    return ans;


}
int main()
{
    int num;
    cin>>num;
    cout<<fact(num);
}
