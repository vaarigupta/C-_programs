#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char x[32];
    cin>>x;
    if(x[0]!='9' && x[0]>='5')
  x[0]='0'+9-x[0]+'0';
    for(int i = 1; i < strlen(x); ++i)
        if(x[i]>='5')
            x[i]='0'+9-x[i]+'0';
    cout <<x<< endl;
    return 0;
}
