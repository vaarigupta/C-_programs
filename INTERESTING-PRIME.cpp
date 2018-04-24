#include<iostream>
using namespace std;
bool isprime(int n)
{
    int i=2;
    while((i*i)<=n)
    {
          if(n%i==0)
    {
        return false;
    }
      i++;
    }
    return true;
}
int a[100000];
void generation(int range)
{
a[0]=2;
int k=1;
for(int i=3;i<=range;i=i+2)
{if( isprime(i))
{
    a[k]=i;
    k++;

}
else
{
    k++;
}

}

}


int main()
{  int n;
cin>>n;
int s=0, j=0;
int range =100000;
generation(range);

while(s>n)
{
    s = s + a[j];
    j++;


}
 if(n==s)
{
    cout<<j;

}

    return 0;
}
