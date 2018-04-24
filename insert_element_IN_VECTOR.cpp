#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        v.push_back(i*i);
    }
    int position;
    cin>>position;
    int no;
    cin>>no;
    v.insert(v.begin()+position,no);
    /// insert func inserts the no at specific position in the vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
