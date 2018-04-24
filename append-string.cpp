#include<iostream>
using namespace std;
int len(char *a)
{
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    return i;
}
char append(char *a, char *b)
{
    int i=len(a);
    int j=0;
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    ///we will not use return statement here bcz it will give address of array 'a'
    ///as we should not pass any array or pointer in return statement as it gives an error
    /// if we want to pass array or pointer in return , we must make a pointer function
    /// that is, *append , otherwise we cant return pointer


}
int main()
{  char a[100],b[100];
   cin.getline(a,100);
   cin.getline(b,100);

   append(a,b);
   cout<<a;
    return 0;
}
