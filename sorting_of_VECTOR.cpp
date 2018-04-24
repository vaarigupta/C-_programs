#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    return a>b;
}
int main()
{
   vector<int>v;
   for(int i=0;i<5;i++)
   {
       int d;
       cin>>d;
       v.push_back(d);
   }
     sort(v.begin(),v.end(), compare);
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<" ";
     }
    return 0;
}
