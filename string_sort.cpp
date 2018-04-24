#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(string s1,string s2)
{
 int count;
 for(int i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
 {
     if(s1[i]==s2[i])
     {
         count=1;
     }
     else
     {
         count=0;
     }
 }
 if(count==1)
 {
     return s1.size()>s2.size();
 }
 else
 {
     return s1<s2;
 }

}

int main()
{
    string s[1000];
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
    {
     getline(cin,s[i]);
    }
    sort(s,s+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }

    return 0;
}

