#include<iostream>
#include<cstring>
using namespace std;
int len(char c[])
{ int i=0;
    while(c[i]!='\0')
    {
        i++;
    }
    return i;
}
bool ispalindrome(char c[])
{
    int i=0;
    int j=len(c)-1;
    while(i<=j)
    {
        if(c[i]!=c[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    char c[100];
    cin.getline(c,100);
    if (ispalindrome(c))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
