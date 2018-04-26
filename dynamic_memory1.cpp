#include<iostream>
using namespace std;
int *create_array(int n)
{
    int *a = new int[n]; /// int a[7]; --if we use this then array created locally(on the stack) is destroyed
    ///as soon as the scope of the func is over and then the array named 'list' in the main function points to the garbage value
    ///

    for(int i=0;i<n;i++)
    {
        a[i]= i*2;
        cout<<a[i]<<" ";
    }
    ///delete []a;
    return a;
}
int main()
{  int n;
cin>>n;
int *list1 = create_array( n); ///list1 contains address of the array created on heap -basically the copy of
///the address given to the list1 and its pointing to the array on the heap then the array is again printed until the delete operator is used

cout<<endl;
for(int i=0;i<n;i++)
{
    cout<<list1[i]<<" ";
}
delete []list1;
    return 0;
}
