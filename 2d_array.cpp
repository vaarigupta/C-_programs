#include<iostream>
using namespace std;
int main()
{ int a[2][2]={{1,2},{3,4}};
cout<<a<<endl; /// prints the address of the array
cout<<a[0]<<endl;///prints again address of array
cout<<a[0][0]<<endl; ///prints the corresponding element
cout<<a[1][1]<<endl;///prints the corresponding element
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
char b[3][3]={{'a','b',},{'c','d'} ,{'e','f','\0'}};
 cout<<b<<endl;///  prints the address of the array
 cout<<b[0]<<endl; ///print the all rows bcz in memory it is stored s linear array
 /// and it shows garbage at the end till it gets a null
 cout<<b[1]<<endl;
 cout<<b[2]<<endl;
 cout<<b[0][1]<<endl;///prints the corresponding element
 cout<<b[2][1]<<endl;///prints the corresponding element
    return 0;
}
