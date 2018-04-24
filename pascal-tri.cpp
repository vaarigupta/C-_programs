#include <iostream>
using namespace std;
int fact(int n)
{ int ans=1;
for (int i=1;i<=n;i++)
{  ans=ans*i;
	}
	return ans;
}
int ncr(int n, int r)
{
	int num;
	num= fact(n)/(fact(r)*fact(n-r));
	return num;

}
void pascal_tri(int n)
{
	for(int i=0;i<=n;i++)
    {
        for(int j=0;j<(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<ncr(i,k)<<" ";
        }

        cout<<endl;
    }



}
int main() {
	int num;
	cin>>num;
	pascal_tri(num);
	return 0;
}
