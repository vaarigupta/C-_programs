#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int rows1= n/2 +1;
    while (i<=rows1)
    {
        int spaces=1;
    while(spaces <= rows1-i)
    {
        cout<<" ";
        spaces++;
    }
    int j=1;
    while(j<=2*i-1)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
        i++;
    }


    return 0;
}
