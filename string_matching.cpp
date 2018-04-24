#include<iostream>
#include<cstring>
using namespace std;
bool match( char *a,char *b)
{
    int i=0,j=0;
    int len = strlen(b);
    while(a[i]!='\0')
    {
        if(a[i]!=b[j])

      {

          j++;

      }
      if(j==len)
      {
          return false;
      }
      else
      {
          i++;
          j++;
      }

    }
    return true;


}

int main()
{
    char a[100],b[100];
    cin.getline(a,100);
    cin.getline(b,100);

    if( match(a,b))
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }


    return 0;
}
