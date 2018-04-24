#include<iostream>
#include<vector>
using namespace std;
int main()
{  int d;
    vector<int> v;
    cout<<v.capacity()<<" is capacity "<<endl;
    v.reserve(50);
    for(int i=0;i<9;i++)
    {
        cin>>d;
        v.push_back(d);
    }
    cout<<endl;

    cout<<v.capacity()<<" is capacity "<<endl;


    for(int i=0;i<v.size();i++)
    {  cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.capacity()<<" is capacity "<<endl;


    v.resize(11);
    for(int i=0;i<v.size();i++)
    {  cout<<v.at(i)<<" ";
    }



    return 0;

}
