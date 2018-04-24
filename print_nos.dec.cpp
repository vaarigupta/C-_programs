#include<iostream>
using namespace std;
void print_dec(int n)
{  if(n==0)
{
    return;
}
    cout<<n<<" ";
    print_dec(n-1);

}
int main()
{ int n;
cin>>n;
print_dec(n);
    return 0;
}
