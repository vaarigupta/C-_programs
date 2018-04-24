#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ///spaces
        for(int s=1;s<=(n-i);s++)
        {
            cout<<"    ";
        }


        ///inc nos
        int no=i;
        for(int inc=1;inc<=i;inc++)
        {
            cout<<no<<"   ";
            no++;
        }
        ///dec nos
        no=(2*i)-2;
        for(int dec=1;dec<=(i-1);dec++)
        {
            cout<<no<<"   ";
            no--;
        }
        cout<<endl;
    }

}
