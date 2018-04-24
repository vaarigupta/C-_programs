#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool compare(pair<string,int>p1,pair<string,int>p2)
{ if(p1.second==p2.second)
{
    return p1.first<p2.first;
}
    return p1.second>p2.second;
}
int main()
{
   int min_salary, n;
   cin>>min_salary>>n;
   pair<string,int>p[100000];
   string name;
   int salary;

   for(int i=0;i<n;i++)
{
    cin>>name>>salary;
    p[i].first=name;
    p[i].second=salary;

}
sort(p,p+n,compare);
for(int i=0;i<n;i++)
{
  if(p[i].second>=min_salary)
  {
      cout<<p[i].first<<" "<<p[i].second<<endl;
  }

}
    return 0;
}
