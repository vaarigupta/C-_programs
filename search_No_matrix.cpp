#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    int a[10][10];
    cin>>rows>>cols;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>a[i][j];
        }

    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    int key;
    cin>>key;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(a[i][j]==key)
            {
              cout<<"found in row"<<i<<"and col"<<j;
            }
        }

    }

    return 0;
}
