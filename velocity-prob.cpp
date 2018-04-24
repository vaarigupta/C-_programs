#include<iostream>
using namespace std;
class vel
{
    int s0,s1,n;
    public:
    void get()
    {
        cin>>s0>>s1>>n;
    }
     void print()
     {
         cout<<s0<<s1<<n;
     }
};

int main()
{
     int t;
     cin>>t;
     vel *p;
     p = new vel[t];

     for(int i=0;i<t;i++)
     {
        vel[i].get();
     }
     for(int i=0;i<t;i++)
     {
        vel[i].print();
     }
    return 0;
}
