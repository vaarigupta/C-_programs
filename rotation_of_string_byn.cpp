#include<iostream>
#include<cstring>
using namespace std;
void rotation(char *a, int k)
{  int len =strlen(a);
    for(int i=0;i<k;i++)
    {
        cout<<a[len-k+i];
    }
    for(int i=0;i<len-k;i++)
    {
        cout<<a[i];
    }

}
int main()
{
    char a[100];
    cin.getline(a,100);
    int k;
    cin>>k;
    rotation(a,k);
    return 0;
}
